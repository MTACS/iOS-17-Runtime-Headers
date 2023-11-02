
@interface ACMToken : NSObject {
    NSDate * _creationDate;
    NSDate * _expirationDate;
    NSNumber * _isTwoStepVerificationRequired;
    NSString * _nonce;
    NSNumber * _personID;
    ACFPrincipal * _principal;
    NSData * _tokenData;
    NSString * _userPreferences;
}

@property (retain) NSDate *creationDate;
@property (retain) NSDate *expirationDate;
@property (retain) NSNumber *isTwoStepVerificationRequired;
@property (retain) NSString *nonce;
@property (retain) NSNumber *personID;
@property (retain) ACFPrincipal *principal;
@property (retain) NSData *tokenData;
@property (nonatomic, copy) NSString *tokenString;
@property (retain) NSString *userPreferences;

+ (id)tokenWithPrincipal:(id)arg1 creationDate:(id)arg2 tokenData:(id)arg3;
+ (id)tokenWithPrincipal:(id)arg1 creationDate:(id)arg2 tokenString:(id)arg3;

- (id)creationDate;
- (void)dealloc;
- (id)expirationDate;
- (id)isTwoStepVerificationRequired;
- (id)nonce;
- (id)personID;
- (id)principal;
- (void)setCreationDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIsTwoStepVerificationRequired:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setPrincipal:(id)arg1;
- (void)setTokenData:(id)arg1;
- (void)setTokenString:(id)arg1;
- (void)setUserPreferences:(id)arg1;
- (id)tokenData;
- (id)tokenString;
- (id)userPreferences;

@end
