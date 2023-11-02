
@interface HFDictionaryValueControlItem : HFControlItem {
    NSString * _characteristicType;
}

@property (nonatomic, readonly, copy) NSString *characteristicType;

+ (id)defaultMainTextColorForCharacteristicType:(id)arg1;
+ (Class)valueClass;

- (void).cxx_destruct;
- (bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)characteristicType;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)getStatus:(out id*)arg1 mainTextColor:(out id*)arg2 supplementaryDescription:(out id*)arg3 withBatchReadResponse:(id)arg4;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;

@end
