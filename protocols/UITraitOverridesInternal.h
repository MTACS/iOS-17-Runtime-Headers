
@protocol UITraitOverridesInternal <UITraitOverrides, UIMutableTraitsInternal, NSObject>

@required

- (bool)_containsTraitToken:(id <_UITraitTokenProtocol>)arg1;
- (void)_removeTraitToken:(id <_UITraitTokenProtocol>)arg1;
- (void)_replaceWithOverrides:(id <UITraitOverridesInternal>)arg1;
- (NSObject<UITraitOverridesInternal> *)_swiftImplCopy;

@end
