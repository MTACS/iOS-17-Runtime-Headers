
@interface MCAirPlaySecurityPayload : MCPayload {
    NSString * _accessType;
    NSString * _password;
    NSString * _securityType;
}

@property (nonatomic, retain) NSString *accessType;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSString *securityType;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)accessType;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)password;
- (id)securityType;
- (void)setAccessType:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setSecurityType:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)verboseDescription;

@end
