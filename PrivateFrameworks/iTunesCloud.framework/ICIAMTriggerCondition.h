
@interface ICIAMTriggerCondition : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    int  _comparisonType;
    int  _dataType;
    struct { 
        unsigned int comparisonType : 1; 
        unsigned int dataType : 1; 
        unsigned int kind : 1; 
        unsigned int triggerConditionType : 1; 
    }  _has;
    NSString * _identifier;
    int  _kind;
    int  _triggerConditionType;
    NSString * _triggerValue;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) int comparisonType;
@property (nonatomic) int dataType;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic) bool hasComparisonType;
@property (nonatomic) bool hasDataType;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasKind;
@property (nonatomic) bool hasTriggerConditionType;
@property (nonatomic, readonly) bool hasTriggerValue;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int kind;
@property (nonatomic) int triggerConditionType;
@property (nonatomic, retain) NSString *triggerValue;

- (void).cxx_destruct;
- (int)StringAsComparisonType:(id)arg1;
- (int)StringAsDataType:(id)arg1;
- (int)StringAsKind:(id)arg1;
- (int)StringAsTriggerConditionType:(id)arg1;
- (id)bundleIdentifier;
- (int)comparisonType;
- (id)comparisonTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataType;
- (id)dataTypeAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasComparisonType;
- (bool)hasDataType;
- (bool)hasIdentifier;
- (bool)hasKind;
- (bool)hasTriggerConditionType;
- (bool)hasTriggerValue;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (int)kind;
- (id)kindAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setComparisonType:(int)arg1;
- (void)setDataType:(int)arg1;
- (void)setHasComparisonType:(bool)arg1;
- (void)setHasDataType:(bool)arg1;
- (void)setHasKind:(bool)arg1;
- (void)setHasTriggerConditionType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKind:(int)arg1;
- (void)setTriggerConditionType:(int)arg1;
- (void)setTriggerValue:(id)arg1;
- (int)triggerConditionType;
- (id)triggerConditionTypeAsString:(int)arg1;
- (id)triggerValue;
- (void)writeTo:(id)arg1;

@end
