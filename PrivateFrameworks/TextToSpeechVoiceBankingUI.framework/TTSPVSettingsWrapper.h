
@interface TTSPVSettingsWrapper : NSObject {
    void $__lazy_storage_$_rootView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _speechSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _voiceId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _voiceSettings;
    void dataDelegate;
    void subscribers;
}

@property (nonatomic) <TTSPerVoiceSettingsViewControllerDelegate> *dataDelegate;
@property (nonatomic, retain) UIViewController *rootView;
@property (nonatomic, copy) NSString *speechSource;

- (void).cxx_destruct;
- (void)addViewToParent:(id)arg1;
- (id)dataDelegate;
- (id)init;
- (void)reloadView;
- (id)rootView;
- (void)setDataDelegate:(id)arg1;
- (void)setRootView:(id)arg1;
- (void)setSpeechSource:(id)arg1;
- (id)speechSource;

@end
