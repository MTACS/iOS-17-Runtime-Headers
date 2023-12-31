
@interface _UIPopoverBackgroundVisualEffect : UIBlurEffect {
    bool  _tintColorIsTranslucent;
}

@property (nonatomic, readonly) bool tintColorIsTranslucent;

+ (id)effectWithStyle:(long long)arg1 tint:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectSettings;
- (bool)tintColorIsTranslucent;

@end
