
@interface HKUCUMUnitDisplayConverter : NSObject {
    NSDictionary * _hkUnitNameLookupTable;
    NSDictionary * _synonymLookupTable;
}

@property (nonatomic, copy) NSDictionary *hkUnitNameLookupTable;
@property (nonatomic, copy) NSDictionary *synonymLookupTable;

+ (id)sharedConverter;

- (void).cxx_destruct;
- (id)hkUnitNameForUCUMUnitCode:(id)arg1;
- (id)hkUnitNameLookupTable;
- (id)init;
- (void)setHkUnitNameLookupTable:(id)arg1;
- (void)setSynonymLookupTable:(id)arg1;
- (id)synonymForUCUMUnitString:(id)arg1;
- (id)synonymLookupTable;

@end
