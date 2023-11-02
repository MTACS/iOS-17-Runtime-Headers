
@interface SASPresentationModel : NSObject {
    NSMutableArray * _enqueuedButtonEventCompletions;
    NSTimer * _pingTimer;
    SASPresentationServer * _presentationServer;
    SASPresentationState * _presentationState;
    long long  _requestState;
}

@property (nonatomic, retain) NSMutableArray *enqueuedButtonEventCompletions;
@property (nonatomic, retain) NSTimer *pingTimer;
@property (nonatomic, readonly) SASPresentationServer *presentationServer;
@property (nonatomic, retain) SASPresentationState *presentationState;
@property (nonatomic) long long requestState;

- (void).cxx_destruct;
- (id)enqueuedButtonEventCompletions;
- (void)flushEnqueuedButtonEventCompletions;
- (id)initWithPresentationServer:(id)arg1;
- (id)pingTimer;
- (id)presentationServer;
- (id)presentationState;
- (long long)requestState;
- (void)setEnqueuedButtonEventCompletions:(id)arg1;
- (void)setPingTimer:(id)arg1;
- (void)setPresentationState:(id)arg1;
- (void)setRequestState:(long long)arg1;

@end
