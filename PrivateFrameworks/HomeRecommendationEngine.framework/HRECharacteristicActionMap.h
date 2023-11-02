
@interface HRECharacteristicActionMap : HREActionMap {
    NSMutableDictionary * _characteristicTypeValues;
}

@property (nonatomic, retain) NSMutableDictionary *characteristicTypeValues;

+ (id)characteristicActionMap:(id)arg1;
+ (id)conditonalCharacteristicActionMap:(id)arg1 condition:(id)arg2;
+ (id)emptyMap;

- (void).cxx_destruct;
- (id)characteristicTypeValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flattenedMapEvaluatedForObject:(id)arg1;
- (id)initWithMap:(id)arg1 condition:(id)arg2;
- (id)mergeWithActionMaps:(id)arg1;
- (void)setCharacteristicTypeValues:(id)arg1;

@end
