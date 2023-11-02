
@interface WBSExtensionsAnalyticsEventCoalescer : NSObject <WBSExtensionsAnalyticsEventCoalescerDelegate> {
    NSMutableSet * _buttonInvokedExtensions;
    <WBSExtensionsAnalyticsEventCoalescerDelegate> * _delegate;
    NSMutableSet * _injectedScriptExtensions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _resetInterval;
    NSTimer * _resetTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSExtensionsAnalyticsEventCoalescerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double resetInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureResetTimer;
- (id)delegate;
- (bool)didInjectScriptForExtensionWithIdentifier:(id)arg1;
- (bool)didInvokeToolbarButtonForExtensionWithIdentifier:(id)arg1;
- (void)extensionAnalyticsEventCoalescer:(id)arg1 didInjectScriptForExtensionWithIdentifier:(id)arg2;
- (void)extensionAnalyticsEventCoalescer:(id)arg1 didInvokeToolbarButtonForExtensionWithIdentifier:(id)arg2;
- (id)init;
- (double)resetInterval;
- (void)setDelegate:(id)arg1;
- (void)setResetInterval:(double)arg1;

@end
