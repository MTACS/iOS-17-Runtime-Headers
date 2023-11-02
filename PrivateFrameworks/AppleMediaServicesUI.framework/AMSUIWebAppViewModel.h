
@interface AMSUIWebAppViewModel : NSObject <AMSUIWebModelInterface> {
    NSString * _accessibilityLabel;
    NSString * _bundleIdentifier;
    NSURL * _iconURL;
    NSString * _title;
}

@property (nonatomic, retain) NSString *accessibilityLabel;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *iconURL;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

+ (bool)validateJSObject:(id)arg1;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)bundleIdentifier;
- (id)createBarButtonItem;
- (id)description;
- (id)iconURL;
- (id)iconWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
