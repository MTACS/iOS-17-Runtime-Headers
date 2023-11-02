
@interface WFREPBError : PBCodable <NSCopying> {
    long long  _code;
    NSString * _domain;
    NSString * _localizedDescription;
    NSString * _localizedFailureReason;
}

@property (nonatomic) long long code;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) bool hasLocalizedDescription;
@property (nonatomic, readonly) bool hasLocalizedFailureReason;
@property (nonatomic, retain) NSString *localizedDescription;
@property (nonatomic, retain) NSString *localizedFailureReason;

- (void).cxx_destruct;
- (long long)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasLocalizedDescription;
- (bool)hasLocalizedFailureReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedFailureReason;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedFailureReason:(id)arg1;
- (void)writeTo:(id)arg1;

@end
