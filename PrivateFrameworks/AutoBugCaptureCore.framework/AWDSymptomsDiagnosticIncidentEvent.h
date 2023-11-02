
@interface AWDSymptomsDiagnosticIncidentEvent : PBCodable <NSCopying> {
    NSString * _detectedName;
    NSString * _effectiveName;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int value : 1; 
        unsigned int state : 1; 
        unsigned int status : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _name;
    int  _state;
    int  _status;
    unsigned long long  _timestamp;
    int  _type;
    unsigned long long  _value;
}

@property (nonatomic, retain) NSString *detectedName;
@property (nonatomic, retain) NSString *effectiveName;
@property (nonatomic, readonly) bool hasDetectedName;
@property (nonatomic, readonly) bool hasEffectiveName;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasState;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasValue;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int state;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long value;

- (void).cxx_destruct;
- (int)StringAsState:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detectedName;
- (id)dictionaryRepresentation;
- (id)effectiveName;
- (bool)hasDetectedName;
- (bool)hasEffectiveName;
- (bool)hasName;
- (bool)hasState;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setDetectedName:(id)arg1;
- (void)setEffectiveName:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(unsigned long long)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (unsigned long long)timestamp;
- (int)type;
- (id)typeAsString:(int)arg1;
- (unsigned long long)value;
- (void)writeTo:(id)arg1;

@end
