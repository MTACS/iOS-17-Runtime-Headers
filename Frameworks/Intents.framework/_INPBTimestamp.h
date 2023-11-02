
@interface _INPBTimestamp : PBCodable <NSCopying, NSSecureCoding, _INPBTimestamp> {
    struct { 
        unsigned int nanos : 1; 
        unsigned int seconds : 1; 
    }  _has;
    int  _nanos;
    long long  _seconds;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasNanos;
@property (nonatomic) bool hasSeconds;
@property (readonly) unsigned long long hash;
@property (nonatomic) int nanos;
@property (nonatomic) long long seconds;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasNanos;
- (bool)hasSeconds;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)nanos;
- (bool)readFrom:(id)arg1;
- (long long)seconds;
- (void)setHasNanos:(bool)arg1;
- (void)setHasSeconds:(bool)arg1;
- (void)setNanos:(int)arg1;
- (void)setSeconds:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
