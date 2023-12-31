
@interface ICIAMMessageRule : PBCodable <NSCopying> {
    struct { 
        unsigned int ruleOperator : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _requiredApplicationContextBundleIdentifier;
    int  _ruleOperator;
    NSMutableArray * _subrules;
    ICIAMTriggerCondition * _triggerCondition;
    NSString * _triggerEventName;
    int  _type;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasRequiredApplicationContextBundleIdentifier;
@property (nonatomic) bool hasRuleOperator;
@property (nonatomic, readonly) bool hasTriggerCondition;
@property (nonatomic, readonly) bool hasTriggerEventName;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *requiredApplicationContextBundleIdentifier;
@property (nonatomic) int ruleOperator;
@property (nonatomic, retain) NSMutableArray *subrules;
@property (nonatomic, retain) ICIAMTriggerCondition *triggerCondition;
@property (nonatomic, retain) NSString *triggerEventName;
@property (nonatomic) int type;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (Class)subrulesType;

- (void).cxx_destruct;
- (int)StringAsRuleOperator:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addSubrules:(id)arg1;
- (void)clearSubrules;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasRequiredApplicationContextBundleIdentifier;
- (bool)hasRuleOperator;
- (bool)hasTriggerCondition;
- (bool)hasTriggerEventName;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requiredApplicationContextBundleIdentifier;
- (int)ruleOperator;
- (id)ruleOperatorAsString:(int)arg1;
- (void)setHasRuleOperator:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRequiredApplicationContextBundleIdentifier:(id)arg1;
- (void)setRuleOperator:(int)arg1;
- (void)setSubrules:(id)arg1;
- (void)setTriggerCondition:(id)arg1;
- (void)setTriggerEventName:(id)arg1;
- (void)setType:(int)arg1;
- (id)subrules;
- (id)subrulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)subrulesCount;
- (id)triggerCondition;
- (id)triggerEventName;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages

- (bool)isExactMatchRule;

@end
