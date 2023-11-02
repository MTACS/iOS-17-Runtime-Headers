
@interface _PBFGalleryEnqueuedPushToProactiveRequest : NSObject {
    NSMutableArray * _completionHandlers;
    bool  _finalized;
    NSError * _finalizedError;
    bool  _finalizedResult;
    NSString * _reason;
    NSUUID * _sessionId;
    NSDictionary * _updatedDescriptors;
}

@property (getter=isFinalized, nonatomic, readonly) bool finalized;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly, copy) NSUUID *sessionId;
@property (nonatomic, readonly, copy) NSDictionary *updatedDescriptors;

- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)arg1;
- (void)addCompletionHandlersFromEnqueuedPushToProactive:(id)arg1;
- (void)fireCompletionHandlersWithError:(id)arg1 didUpdate:(bool)arg2;
- (id)initWithUpdatedDescriptors:(id)arg1 reason:(id)arg2 sessionId:(id)arg3;
- (bool)isFinalized;
- (id)reason;
- (id)sessionId;
- (id)updatedDescriptors;

@end
