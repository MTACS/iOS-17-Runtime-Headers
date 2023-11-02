
@interface INSExtensionServiceIntentExecutor : NSObject {
    INCExtensionProxy * _extensionProxy;
    INIntent * _intent;
    NSObject<OS_dispatch_queue> * _queue;
    <INVCVoiceShortcutClient> * _voiceShortcutClient;
}

@property (nonatomic, retain) INCExtensionProxy *extensionProxy;
@property (nonatomic, retain) INIntent *intent;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <INVCVoiceShortcutClient> *voiceShortcutClient;

- (void).cxx_destruct;
- (id)extensionProxy;
- (id)initWithIntent:(id)arg1 extensionProxy:(id)arg2 queue:(id)arg3;
- (id)initWithVoiceShortcutClient:(id)arg1 intent:(id)arg2;
- (id)intent;
- (id)queue;
- (void)sendAceCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setExtensionProxy:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setVoiceShortcutClient:(id)arg1;
- (id)voiceShortcutClient;

@end
