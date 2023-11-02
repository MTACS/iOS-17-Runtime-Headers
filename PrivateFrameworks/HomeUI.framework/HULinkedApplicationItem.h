
@interface HULinkedApplicationItem : HFItem {
    NSSet * _associatedAccessories;
}

@property (nonatomic, retain) NSSet *associatedAccessories;
@property (nonatomic, readonly) NSString *bundleIdentifier;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)_failedUpdateOutcome;
- (int)_iconVariantForScale:(double)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)associatedAccessories;
- (id)bundleIdentifier;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setAssociatedAccessories:(id)arg1;

@end
