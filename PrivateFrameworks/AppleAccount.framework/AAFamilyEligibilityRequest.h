
@interface AAFamilyEligibilityRequest : AAFamilyRequest {
    ACAccount * _iTunesAccount;
}

@property (nonatomic, retain) ACAccount *iTunesAccount;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)iTunesAccount;
- (void)setITunesAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
