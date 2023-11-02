
@interface AMSBiometricsSignatureTask : AMSTask {
    AMSBiometricsSignatureRequest * _request;
}

@property (nonatomic, readonly) AMSBiometricsSignatureRequest *request;

+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyPrivateKeyWithStyle:(unsigned long long)arg1 context:(id)arg2 account:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (id)fetchDataToSignWithPublicKeyData:(id)arg1 challenge:(id)arg2 error:(id*)arg3;
+ (id)fetchPublicKeyDataFromPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 error:(id*)arg2;
+ (id)signDataWithPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 dataToSign:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)_fetchCardEnrollmentConfigurations:(id*)arg1;
- (bool)_performCardEnrollmentCheck:(id*)arg1;
- (id)_performSignatureInProcess;
- (id)_performSignatureOutOfProcess;
- (id)initWithRequest:(id)arg1;
- (id)performSignature;
- (id)performSignatureFromService;
- (void)regenerateAttestationKeys;
- (id)request;
- (id)signWithPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 error:(id*)arg2;

@end
