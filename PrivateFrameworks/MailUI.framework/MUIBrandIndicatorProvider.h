
@interface MUIBrandIndicatorProvider : NSObject <EFLoggable, EFSignpostable> {
    EMMessageRepository * _messageRepository;
    <EFScheduler> * _scheduler;
    MUICachingSVGConverter * _svgConverter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EMMessageRepository *messageRepository;
@property (nonatomic, readonly) <EFScheduler> *scheduler;
@property (readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MUICachingSVGConverter *svgConverter;

+ (id)log;
+ (id)signpostLog;

- (void).cxx_destruct;
- (id)brandIndicatorFutureForLocation:(id)arg1;
- (id)brandIndicatorFutureForLocation:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithMessageRepository:(id)arg1 svgConverter:(id)arg2;
- (id)messageRepository;
- (id)scheduler;
- (unsigned long long)signpostID;
- (id)svgConverter;

@end
