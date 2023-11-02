
@interface RBSIdentityAndRecordInfoProvider : NSObject <RBSWrappedLSInfoProvider> {
    NSString * _bundleID;
    NSString * _personaString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_providerWithIdentity:(id)arg1 record:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithIdentity:(id)arg1 record:(id)arg2;
- (id)fetchWrappedInfoWithError:(out id*)arg1;

@end
