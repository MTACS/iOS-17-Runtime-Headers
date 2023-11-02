
@interface _INPBScoredValue : PBCodable <NSCopying, NSSecureCoding, _INPBScoredValue> {
    struct { 
        unsigned int score : 1; 
    }  _has;
    long long  _score;
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long score;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasScore;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)score;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(long long)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
