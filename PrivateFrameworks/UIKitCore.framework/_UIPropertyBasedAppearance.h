
@interface _UIPropertyBasedAppearance : _UIAppearance {
    NSDictionary * _propertiesToMatch;
}

@property (setter=_setPropertiesToMatch:, nonatomic, retain) NSDictionary *_propertiesToMatch;

+ (id)_appearanceMatchingProperties:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;
+ (id)_appearanceObjectKeyForProperties:(id)arg1;

- (bool)_isRecordingInvocations;
- (bool)_isValidAppearanceForCustomizableObject:(id)arg1;
- (id)_propertiesToMatch;
- (void)_setPropertiesToMatch:(id)arg1;
- (void)dealloc;

@end
