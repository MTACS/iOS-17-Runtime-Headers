
@interface AMSMescal : NSObject <AMSBagConsumer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_DAAPActionsForURLBagActions:(id)arg1;
+ (bool)_matchSignSapURL:(id)arg1 bagDictionary:(id)arg2 error:(id*)arg3;
+ (id)_matchSignedActions:(id)arg1 withURL:(id)arg2 error:(id*)arg3;
+ (id)_signedActionDataFromRequest:(id)arg1 policy:(id)arg2;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (bool)primeTheConnectionWithBag:(id)arg1 error:(id*)arg2;
+ (bool)primeTheConnectionWithContract:(id)arg1 error:(id*)arg2;
+ (bool)primeTheConnectionWithContract:(id)arg1 logKey:(id)arg2 error:(id*)arg3;
+ (bool)shouldReprimeConnectionWithResult:(id)arg1;
+ (id)signatureFromData:(id)arg1 type:(long long)arg2 bag:(id)arg3 error:(id*)arg4;
+ (id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id*)arg4;
+ (id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id*)arg5;
+ (id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bag:(id)arg3 error:(id*)arg4;
+ (id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id*)arg4;
+ (id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id*)arg5;
+ (bool)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bag:(id)arg4 error:(id*)arg5;
+ (bool)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 error:(id*)arg5;
+ (bool)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5 error:(id*)arg6;

@end
