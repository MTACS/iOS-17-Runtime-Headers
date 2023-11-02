
@interface JTView : UIView {
    bool  _debuggingUIEnabled;
}

@property bool debuggingUIEnabled;

+ (Class)layerClass;

- (bool)debuggingUIEnabled;
- (void)enableDebugMode:(id)arg1;
- (void)layoutSubviews;
- (void)setDebuggingUIEnabled:(bool)arg1;

@end
