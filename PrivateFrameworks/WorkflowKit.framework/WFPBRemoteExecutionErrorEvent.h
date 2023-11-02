
@interface WFPBRemoteExecutionErrorEvent : PBCodable <NSCopying> {
    NSString * _destinationType;
    NSString * _errorCode;
    NSString * _errorDomain;
    NSString * _key;
    NSString * _source;
}

@property (nonatomic, retain) NSString *destinationType;
@property (nonatomic, retain) NSString *errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic, readonly) bool hasDestinationType;
@property (nonatomic, readonly) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *source;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationType;
- (id)dictionaryRepresentation;
- (id)errorCode;
- (id)errorDomain;
- (bool)hasDestinationType;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasKey;
- (bool)hasSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDestinationType:(id)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (void)writeTo:(id)arg1;

@end
