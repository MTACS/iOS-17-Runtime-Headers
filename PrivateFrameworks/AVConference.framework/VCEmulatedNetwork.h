
@interface VCEmulatedNetwork : NSObject {
    unsigned int  _numberOfPacketsWaitingInOutputQueue;
    VCEmulatedOutputQueue * _outputQueue;
    NSDictionary * _policies;
    id /* block */  _popCompletionHandler;
    id /* block */  _pushCompletionHandler;
}

@property (nonatomic, readonly) unsigned int numberOfPacketsWaitingInOutputQueue;
@property (nonatomic, copy) id /* block */ popCompletionHandler;
@property (nonatomic, copy) id /* block */ pushCompletionHandler;

- (id)copyPacketFromPop;
- (void)dealloc;
- (id)initWithPolicies:(id)arg1;
- (unsigned int)numberOfPacketsWaitingInOutputQueue;
- (id /* block */)popCompletionHandler;
- (void)push:(id)arg1;
- (id /* block */)pushCompletionHandler;
- (void)runUntilTime:(double)arg1;
- (void)setPopCompletionHandler:(id /* block */)arg1;
- (void)setPushCompletionHandler:(id /* block */)arg1;

@end
