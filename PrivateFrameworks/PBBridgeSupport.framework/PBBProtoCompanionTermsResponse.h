
@interface PBBProtoCompanionTermsResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int isExistingAccountTerms : 1; 
        unsigned int termsAccepted : 1; 
    }  _has;
    bool  _isExistingAccountTerms;
    NSString * _responseData;
    bool  _termsAccepted;
    NSString * _userAgent;
}

@property (nonatomic) bool hasIsExistingAccountTerms;
@property (nonatomic, readonly) bool hasResponseData;
@property (nonatomic) bool hasTermsAccepted;
@property (nonatomic, readonly) bool hasUserAgent;
@property (nonatomic) bool isExistingAccountTerms;
@property (nonatomic, retain) NSString *responseData;
@property (nonatomic) bool termsAccepted;
@property (nonatomic, retain) NSString *userAgent;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsExistingAccountTerms;
- (bool)hasResponseData;
- (bool)hasTermsAccepted;
- (bool)hasUserAgent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isExistingAccountTerms;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseData;
- (void)setHasIsExistingAccountTerms:(bool)arg1;
- (void)setHasTermsAccepted:(bool)arg1;
- (void)setIsExistingAccountTerms:(bool)arg1;
- (void)setResponseData:(id)arg1;
- (void)setTermsAccepted:(bool)arg1;
- (void)setUserAgent:(id)arg1;
- (bool)termsAccepted;
- (id)userAgent;
- (void)writeTo:(id)arg1;

@end
