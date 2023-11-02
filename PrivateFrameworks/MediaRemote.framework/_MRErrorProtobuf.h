
@interface _MRErrorProtobuf : PBCodable <NSCopying> {
    int  _code;
    NSString * _domain;
    struct { 
        unsigned int code : 1; 
    }  _has;
    NSString * _localizedDescription;
    NSString * _localizedFailureReason;
    NSMutableArray * _underlyingErrors;
}

@property (nonatomic) int code;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) bool hasCode;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, readonly) bool hasLocalizedDescription;
@property (nonatomic, readonly) bool hasLocalizedFailureReason;
@property (nonatomic, retain) NSString *localizedDescription;
@property (nonatomic, retain) NSString *localizedFailureReason;
@property (nonatomic, retain) NSMutableArray *underlyingErrors;

+ (Class)underlyingErrorsType;

- (void).cxx_destruct;
- (void)addUnderlyingErrors:(id)arg1;
- (void)clearUnderlyingErrors;
- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasCode;
- (bool)hasDomain;
- (bool)hasLocalizedDescription;
- (bool)hasLocalizedFailureReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedFailureReason;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedFailureReason:(id)arg1;
- (void)setUnderlyingErrors:(id)arg1;
- (id)underlyingErrors;
- (id)underlyingErrorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)underlyingErrorsCount;
- (void)writeTo:(id)arg1;

@end
