
@interface CLPBundleId : PBCodable <NSCopying> {
    NSString * _fullName;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _shortKey;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *fullName;
@property (nonatomic, readonly) bool hasFullName;
@property (nonatomic, readonly) bool hasShortKey;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *shortKey;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fullName;
- (bool)hasFullName;
- (bool)hasShortKey;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setShortKey:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)shortKey;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
