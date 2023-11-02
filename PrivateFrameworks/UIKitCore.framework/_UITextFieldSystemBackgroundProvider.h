
@interface _UITextFieldSystemBackgroundProvider : _UITextFieldViewBackgroundProvider {
    UITextFieldBackgroundView * _systemBackgroundView;
}

+ (id)systemStyleMetricsProvider;

- (void).cxx_destruct;
- (void)_buildDescription:(id)arg1;
- (void)addToTextField:(id)arg1;
- (long long)associatedBorderStyle;
- (id)backgroundView;
- (void)enabledDidChangeAnimated:(bool)arg1;
- (id)overridingGetBackgroundColor;
- (id)overridingSetBackgroundColor:(id)arg1;
- (id)preferredMetricsProvider;
- (void)removeFromTextField;
- (void)setProgress:(double)arg1;
- (Class)systemBackgroundViewClass;

@end
