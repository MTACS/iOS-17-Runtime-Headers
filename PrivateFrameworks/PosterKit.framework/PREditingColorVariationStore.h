
@interface PREditingColorVariationStore : NSObject {
    NSMutableDictionary * _persistentVariationStorage;
    NSMutableDictionary * _variationStorage;
}

@property (nonatomic, retain) NSMutableDictionary *persistentVariationStorage;
@property (nonatomic, retain) NSMutableDictionary *variationStorage;

+ (void)performMigrationsIfNeededForStorage:(id)arg1 version:(unsigned long long)arg2;
+ (id)posterColorForColor:(id)arg1 withAppliedVariation:(double)arg2;
+ (unsigned long long)version;

- (void).cxx_destruct;
- (id)baseColorForVariedColor:(id)arg1 forContextIdentifier:(id)arg2 variation:(double*)arg3 forDataLayerPicker:(bool)arg4;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithVariationStorage:(id)arg1 version:(unsigned long long)arg2;
- (id)persistentVariationStorage;
- (void)resetAllValues;
- (void)setPersistentVariationStorage:(id)arg1;
- (void)setVariation:(double)arg1 forPickerColor:(id)arg2 forContextIdentifier:(id)arg3;
- (void)setVariationStorage:(id)arg1;
- (id)variationForPickerColor:(id)arg1 forContextIdentifier:(id)arg2;
- (id)variationStorage;

@end
