
@interface AVTMutableEditingModelColors : AVTEditingModelColors {
    NSMutableDictionary * _mutableStorage;
}

@property (nonatomic, readonly) NSMutableDictionary *mutableStorage;

- (void).cxx_destruct;
- (id)initWithStorage:(id)arg1 variationStore:(id)arg2;
- (id)initWithVariationStore:(id)arg1;
- (id)mutableStorage;
- (void)setColor:(id)arg1 forSettingKind:(struct { long long x1; long long x2; })arg2 identifier:(id)arg3;

@end
