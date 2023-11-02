
@interface _INPBContactHandle : PBCodable <NSCopying, NSSecureCoding, _INPBContactHandle> {
    int  _emergencyType;
    int  _faceTimeType;
    struct { 
        unsigned int emergencyType : 1; 
        unsigned int faceTimeType : 1; 
        unsigned int suggested : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _label;
    bool  _suggested;
    int  _type;
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int emergencyType;
@property (nonatomic) int faceTimeType;
@property (nonatomic) bool hasEmergencyType;
@property (nonatomic) bool hasFaceTimeType;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasSuggested;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool suggested;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsEmergencyType:(id)arg1;
- (int)StringAsFaceTimeType:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (int)emergencyType;
- (id)emergencyTypeAsString:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)faceTimeType;
- (id)faceTimeTypeAsString:(int)arg1;
- (bool)hasEmergencyType;
- (bool)hasFaceTimeType;
- (bool)hasLabel;
- (bool)hasSuggested;
- (bool)hasType;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)readFrom:(id)arg1;
- (void)setEmergencyType:(int)arg1;
- (void)setFaceTimeType:(int)arg1;
- (void)setHasEmergencyType:(bool)arg1;
- (void)setHasFaceTimeType:(bool)arg1;
- (void)setHasSuggested:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setSuggested:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (bool)suggested;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
