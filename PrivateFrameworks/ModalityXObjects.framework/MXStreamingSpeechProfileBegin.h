
@interface MXStreamingSpeechProfileBegin : PBCodable <NSCopying> {
    NSString * _locale;
    NSString * _phoneSetVersion;
    NSString * _requestId;
}

@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasPhoneSetVersion;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSString *phoneSetVersion;
@property (nonatomic, retain) NSString *requestId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocale;
- (bool)hasPhoneSetVersion;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (id)phoneSetVersion;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setLocale:(id)arg1;
- (void)setPhoneSetVersion:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
