
@interface PRMutablePosterAmbientWidgetLayout : PRPosterAmbientWidgetLayout

@property (nonatomic, copy) NSDictionary *widgetLayoutIconState;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

@end
