
@interface TSSPropertySetChangeDetails : NSObject {
    TSSMutablePropertySet * mChangedProperties;
}

- (void)addChangedProperties:(id)arg1;
- (void)addChangedProperty:(int)arg1;
- (id)changedProperties;
- (void)dealloc;
- (id)init;
- (id)initWithChangedProperties:(id)arg1;

@end
