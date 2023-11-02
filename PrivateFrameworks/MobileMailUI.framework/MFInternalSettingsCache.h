
@interface MFInternalSettingsCache : NSObject {
    bool  _UIDebuggingEnabled;
    bool  _tiltedTabSkyViewEnabled;
}

@property (nonatomic) bool UIDebuggingEnabled;
@property (nonatomic) bool tiltedTabSkyViewEnabled;

+ (id)sharedCache;

- (bool)UIDebuggingEnabled;
- (void)setTiltedTabSkyViewEnabled:(bool)arg1;
- (void)setUIDebuggingEnabled:(bool)arg1;
- (bool)tiltedTabSkyViewEnabled;

@end
