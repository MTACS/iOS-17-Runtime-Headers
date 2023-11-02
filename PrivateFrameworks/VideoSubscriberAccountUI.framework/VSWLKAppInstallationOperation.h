
@interface VSWLKAppInstallationOperation : VSAsyncOperation {
    NSString * _appAdamID;
    id  _installable;
    VSOptional * _result;
}

@property (nonatomic, retain) NSString *appAdamID;
@property (nonatomic, retain) id installable;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (id)appAdamID;
- (void)executionDidBegin;
- (id)installable;
- (id)result;
- (void)setAppAdamID:(id)arg1;
- (void)setInstallable:(id)arg1;
- (void)setResult:(id)arg1;

@end
