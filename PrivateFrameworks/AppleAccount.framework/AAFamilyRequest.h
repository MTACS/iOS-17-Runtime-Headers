
@interface AAFamilyRequest : AARequest {
    ACAccount * _appleAccount;
    AAGrandSlamSigner * _familyGrandSlamSigner;
    AAGrandSlamSigner * _grandSlamSigner;
}

@property (nonatomic, readonly) bool isUserInitiated;

- (void).cxx_destruct;
- (id)_familyGrandSlamSigner;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3;
- (id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2;
- (id)initWithGrandSlamSigner:(id)arg1;
- (bool)isUserInitiated;
- (id)urlRequest;

@end
