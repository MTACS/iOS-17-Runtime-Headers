
@interface CKDPThrottlingConfig : PBCodable <NSCopying> {
    CKDPThrottlingConfigCriteria * _criteria;
    struct { 
        unsigned int ttlSec : 1; 
    }  _has;
    NSString * _label;
    CKDPThrottlingConfigRateLimit * _rateLimit;
    int  _ttlSec;
}

@property (nonatomic, retain) CKDPThrottlingConfigCriteria *criteria;
@property (nonatomic, readonly) bool hasCriteria;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, readonly) bool hasRateLimit;
@property (nonatomic) bool hasTtlSec;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) CKDPThrottlingConfigRateLimit *rateLimit;
@property (nonatomic) int ttlSec;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criteria;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCriteria;
- (bool)hasLabel;
- (bool)hasRateLimit;
- (bool)hasTtlSec;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (id)rateLimit;
- (bool)readFrom:(id)arg1;
- (void)setCriteria:(id)arg1;
- (void)setHasTtlSec:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setRateLimit:(id)arg1;
- (void)setTtlSec:(int)arg1;
- (int)ttlSec;
- (void)writeTo:(id)arg1;

@end
