
@interface BRLTSTranslationService : NSObject <BRLTTranslationServiceInterface> {
    NSObject<OS_dispatch_queue> * _queue;
    BRLTSTranslator * _queueTranslator;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) BRLTSTranslator *queueTranslator;

+ (id)exportedInterface;

- (void).cxx_destruct;
- (void)brailleForText:(id)arg1 parameters:(id)arg2 withReply:(id /* block */)arg3;
- (id)init;
- (void)loadBrailleBundleForIdentifier:(id)arg1;
- (id)queue;
- (id)queueTranslator;
- (void)setQueue:(id)arg1;
- (void)setQueueTranslator:(id)arg1;
- (void)textForBraille:(id)arg1 parameters:(id)arg2 withReply:(id /* block */)arg3;

@end
