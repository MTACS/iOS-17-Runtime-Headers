
@interface JTLayer : CALayer {
    bool  _debuggingUIEnabled;
}

@property bool debuggingUIEnabled;

- (bool)debuggingUIEnabled;
- (id)initWithDebugEnabled;
- (void)setDebuggingUIEnabled:(bool)arg1;

@end
