
@interface AVTCoreModelPickerDisplayCondition : NSObject {
    unsigned long long  _targetSectionIndex;
    unsigned long long  _value;
}

@property (nonatomic, readonly) unsigned long long targetSectionIndex;
@property (nonatomic, readonly) unsigned long long value;

+ (unsigned long long)conditionValueFromString:(id)arg1;
+ (id)displayConditionFromDictionnary:(id)arg1;

- (id)initWithTargetSectionIndex:(unsigned long long)arg1 value:(unsigned long long)arg2;
- (unsigned long long)targetSectionIndex;
- (unsigned long long)value;

@end
