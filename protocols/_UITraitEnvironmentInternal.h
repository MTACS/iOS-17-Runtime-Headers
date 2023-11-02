
@protocol _UITraitEnvironmentInternal <UITraitEnvironment>

@required

- (UITraitCollection *)_traitCollectionForChildEnvironment:(id <UITraitEnvironment>)arg1;
- (NSString *)_traitTrace;
- (NSString *)_traitTrace:(NSString *)arg1;

@optional

- (NSString *)_extraInfoForTraitTrace;
- (<_UITraitEnvironmentInternal> *)_parentTraitEnvironment;

@end
