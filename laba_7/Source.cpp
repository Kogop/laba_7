#include <iostream>

using namespace std;

int s[10] = { 0,1,2,3,4,5,6,7,8,9 }, e[10] = { 0,1,2,3,4,5,6,7,8,9 }, n[10] = { 0,1,2,3,4,5,6,7,8,9 }, b[10] = { 0,1,2,3,4,5,6,7,8,9 }, m[10] = { 0,1,2,3,4,5,6,7,8,9 }, o[10] = { 0,1,2,3,4,5,6,7,8,9 }, p[10] = { 0,1,2,3,4,5,6,7,8,9 }, y[10] = { 0,1,2,3,4,5,6,7,8,9 };
int t = 0;

int main() {


	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) {

			for (int k = 0; k < 10; k++) {

				for (int l = 0; l < 10; l++) {

					for (int w = 1; w < 10; w++) {

						for (int q = 0; q < 10; q++) {

							for (int x = 0; x < 10; x++) {

								for (int z = 0; z < 10; z++) {
									if (s[i] != m[w] && s[i] != e[j] && s[i] != o[q] && s[i] != n[k] && s[i] != p[x] && s[i] != b[l] && s[i] != y[z])
									{
										if (e[j] != m[w] && e[j] != o[q] && e[j] != n[k] && e[j] != p[x] && e[j] != b[l] && e[j] != y[z])
										{

											if (n[k] != b[l] && n[k] != m[w] && n[k] != o[q] && n[k] != p[x] && n[k] != y[z])
											{
												if (b[l] != m[w] && b[l] != o[q] && b[l] != p[x] && b[l] != y[z])
												{
													if (m[w] != o[q] && m[w] != p[x] && m[w] != y[z])
													{

														if (o[q] != p[x] && o[q] != y[z])
														{
															if (p[x] != y[z]) {


																if (s[i] * 1000 + m[w] * 1000 + e[j] * 100 + o[q] * 100 + n[k] * 10 + p[x] * 10 + b[l] + e[j] == m[w] * 10000 + o[q] * 1000 + n[k] * 100 + e[j] * 10 + y[z])
																{
																	cout << " " << s[i] << e[j] << n[k] << b[l] << endl;
																	cout << "+" << endl;
																	cout << " " << m[w] << o[q] << p[x] << e[j] << endl;
																	cout << "-----" << endl;
																	cout << m[w] << o[q] << n[k] << e[j] << y[z] << endl;
																	cout << "    " << endl;


																}
															}
														}
													}
												}
											}
										}
									}

								}



							}



						}


					}



				}



			}



		}

	}

	return 1;

}