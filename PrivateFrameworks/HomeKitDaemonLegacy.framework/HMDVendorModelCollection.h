
@interface HMDVendorModelCollection : HMFObject {
    HMDVendorModelEntry * _defaultEntry;
    NSMutableSet * _entries;
}

@property (nonatomic, retain) HMDVendorModelEntry *defaultEntry;
@property (nonatomic, readonly) NSMutableSet *entries;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (id)attributeDescriptions;
- (id)defaultEntry;
- (id)entries;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)lookupModel:(id)arg1;
- (id)lookupProductData:(id)arg1;
- (void)setDefaultEntry:(id)arg1;

@end
