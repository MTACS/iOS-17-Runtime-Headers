
@interface PPM2NamedEntityDonationError : PBCodable <NSCopying> {
    long long  _errorCode;
    NSString * _errorMessage;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int source : 1; 
    }  _has;
    int  _source;
}

@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorMessage;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorMessage;
@property (nonatomic) bool hasSource;
@property (nonatomic) int source;

- (void).cxx_destruct;
- (int)StringAsSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorMessage;
- (bool)hasErrorCode;
- (bool)hasErrorMessage;
- (bool)hasSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
