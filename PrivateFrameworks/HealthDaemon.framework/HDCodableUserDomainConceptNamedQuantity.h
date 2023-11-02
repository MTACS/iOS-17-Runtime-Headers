
@interface HDCodableUserDomainConceptNamedQuantity : PBCodable <NSCopying> {
    bool  _deleted;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
        unsigned int value : 1; 
        unsigned int version : 1; 
        unsigned int deleted : 1; 
    }  _has;
    NSString * _name;
    double  _timestamp;
    long long  _type;
    NSString * _unit;
    double  _value;
    long long  _version;
}

@property (nonatomic) bool deleted;
@property (nonatomic) bool hasDeleted;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUnit;
@property (nonatomic) bool hasValue;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSString *unit;
@property (nonatomic) double value;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeleted;
- (bool)hasName;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasUnit;
- (bool)hasValue;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setHasDeleted:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setUnit:(id)arg1;
- (void)setValue:(double)arg1;
- (void)setVersion:(long long)arg1;
- (double)timestamp;
- (long long)type;
- (id)unit;
- (double)value;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
