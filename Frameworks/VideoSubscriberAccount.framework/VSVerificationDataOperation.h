
@interface VSVerificationDataOperation : VSAsyncOperation {
    AKAnisetteProvisioningController * _provisioningController;
    VSOptional * _result;
}

@property (nonatomic, retain) AKAnisetteProvisioningController *provisioningController;
@property (retain) VSOptional *result;

- (void).cxx_destruct;
- (void)_finishWithData:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)_finishWithResult:(int)arg1 bytes:(char *)arg2 length:(unsigned int)arg3;
- (void)executionDidBegin;
- (id)init;
- (id)provisioningController;
- (id)result;
- (void)setProvisioningController:(id)arg1;
- (void)setResult:(id)arg1;

@end
