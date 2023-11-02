
@interface MXProcessingError : PBCodable <NSCopying> {
    int  _code;
    NSString * _errorDescription;
    int  _errorSource;
    struct { 
        unsigned int code : 1; 
        unsigned int errorSource : 1; 
    }  _has;
    NSString * _requestId;
}

@property (nonatomic) int code;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic) int errorSource;
@property (nonatomic) bool hasCode;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic) bool hasErrorSource;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, retain) NSString *requestId;

- (void).cxx_destruct;
- (int)StringAsErrorSource:(id)arg1;
- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorDescription;
- (int)errorSource;
- (id)errorSourceAsString:(int)arg1;
- (bool)hasCode;
- (bool)hasErrorDescription;
- (bool)hasErrorSource;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setCode:(int)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setErrorSource:(int)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setHasErrorSource:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
