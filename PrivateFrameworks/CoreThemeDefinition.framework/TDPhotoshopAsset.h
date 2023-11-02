
@interface TDPhotoshopAsset : TDAsset

@property (nonatomic, retain) NSSet *productions;

- (id)_activeProductionWithRenditionsInProductions:(id)arg1;
- (id)_productionWithRenditionsInProductions:(id)arg1;
- (id)copyDataFromAttributes;
- (bool)hasCursorProduction;
- (bool)hasProduction;
- (id)production;
- (void)setAttributesFromCopyData:(id)arg1;

@end
