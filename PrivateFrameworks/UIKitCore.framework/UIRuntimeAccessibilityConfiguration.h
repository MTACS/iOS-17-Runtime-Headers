
@interface UIRuntimeAccessibilityConfiguration : NSObject {
    NSString * accessibilityConfigurationHint;
    NSString * accessibilityConfigurationIdentifier;
    NSString * accessibilityConfigurationLabel;
    NSNumber * accessibilityConfigurationTraits;
    NSNumber * isAccessibilityConfigurationElement;
    NSObject * object;
}

@property (nonatomic, retain) NSString *accessibilityConfigurationHint;
@property (nonatomic, retain) NSString *accessibilityConfigurationIdentifier;
@property (nonatomic, retain) NSString *accessibilityConfigurationLabel;
@property (nonatomic, retain) NSNumber *accessibilityConfigurationTraits;
@property (nonatomic, retain) NSNumber *isAccessibilityConfigurationElement;
@property (nonatomic, retain) NSObject *object;

- (void).cxx_destruct;
- (id)accessibilityConfigurationHint;
- (id)accessibilityConfigurationIdentifier;
- (id)accessibilityConfigurationLabel;
- (id)accessibilityConfigurationTraits;
- (void)applyConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 label:(id)arg2 hint:(id)arg3 traits:(id)arg4 andIsAccessibilityElement:(id)arg5;
- (id)initWithObject:(id)arg1 label:(id)arg2 identifier:(id)arg3 hint:(id)arg4 traits:(id)arg5 andIsAccessibilityElement:(id)arg6;
- (id)isAccessibilityConfigurationElement;
- (id)object;
- (void)setAccessibilityConfigurationHint:(id)arg1;
- (void)setAccessibilityConfigurationIdentifier:(id)arg1;
- (void)setAccessibilityConfigurationLabel:(id)arg1;
- (void)setAccessibilityConfigurationTraits:(id)arg1;
- (void)setIsAccessibilityConfigurationElement:(id)arg1;
- (void)setObject:(id)arg1;

@end
