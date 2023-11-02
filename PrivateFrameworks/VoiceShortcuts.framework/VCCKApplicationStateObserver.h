
@interface VCCKApplicationStateObserver : NSObject {
    _Atomic bool  _atomicApplicationVisible;
    NSString * _bundleIdentifier;
    FBSDisplayLayoutMonitor * _layoutMonitor;
}

@property (getter=isApplicationVisible, nonatomic) bool applicationVisible;
@property (nonatomic) _Atomic bool atomicApplicationVisible;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) FBSDisplayLayoutMonitor *layoutMonitor;

- (void).cxx_destruct;
- (bool)atomicApplicationVisible;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isApplicationVisible;
- (id)layoutMonitor;
- (void)setApplicationVisible:(bool)arg1;
- (void)setAtomicApplicationVisible:(bool)arg1;

@end
