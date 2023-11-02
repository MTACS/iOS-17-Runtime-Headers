
@interface WFDialogAttribution : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appBundleIdentifier;
    WFIcon * _icon;
    NSString * _title;
    WFWorkflowIcon * _workflowIcon;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) WFIcon *icon;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, retain) WFWorkflowIcon *workflowIcon;

+ (id)attributionWithAppBundleIdentifier:(id)arg1;
+ (id)attributionWithTitle:(id)arg1 icon:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 workflowIcon:(id)arg3;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 workflowIcon:(id)arg3 appBundleIdentifier:(id)arg4;
- (void)setWorkflowIcon:(id)arg1;
- (id)title;
- (id)workflowIcon;

@end
