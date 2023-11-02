
@protocol ICDerivedAttributeProviding

@required

- (bool)needsInitialDerivedAttributesUpdate;
- (void)updateDerivedAttributesIfNeeded;

@end
