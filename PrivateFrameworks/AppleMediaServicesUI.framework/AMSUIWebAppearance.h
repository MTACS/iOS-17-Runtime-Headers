
@interface AMSUIWebAppearance : NSObject <NSCopying> {
    UIColor * _backgroundColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;

+ (id)defaultAppearance;
+ (id)secondarySystemBackgroundColor;
+ (id)secondarySystemGroupedBackgroundColor;
+ (id)systemBackgroundColor;
+ (id)systemGroupedBackgroundColor;
+ (id)tableViewAppearance;
+ (id)tertiarySystemBackgroundColor;
+ (id)tertiarySystemGroupedBackgroundColor;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)updateBackgroundColorWithJSString:(id)arg1;

@end
