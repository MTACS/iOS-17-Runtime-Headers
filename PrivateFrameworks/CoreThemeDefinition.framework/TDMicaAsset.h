
@interface TDMicaAsset : TDAsset

@property (nonatomic, retain) NSSet *productions;

- (id)_productionWithRenditionsInProductions:(id)arg1;
- (id)copyDataFromAttributes;
- (bool)hasCursorProduction;
- (bool)hasProduction;
- (id)production;
- (void)setAttributesFromCopyData:(id)arg1;

@end
