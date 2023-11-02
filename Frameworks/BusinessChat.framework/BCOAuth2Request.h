
@interface BCOAuth2Request : NSObject <BCOAuth2RequestProtocol> {
    NSString * _businessIdentifier;
    <BCBaseOAuth2Protocol> * _oauth2;
}

@property (nonatomic, retain) NSString *businessIdentifier;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, retain) <BCBaseOAuth2Protocol> *oauth2;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1 URLProvider:(id)arg2;
- (id)businessIdentifier;
- (id)debugDescription;
- (id)dictionaryValue;
- (id)oauth2;
- (void)setBusinessIdentifier:(id)arg1;
- (void)setOauth2:(id)arg1;

@end
