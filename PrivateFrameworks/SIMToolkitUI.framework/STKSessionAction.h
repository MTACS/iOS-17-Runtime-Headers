
@interface STKSessionAction : NSObject {
    BSAction * _action;
    STKSessionBehavior * _behavior;
    <BSXPCCoding> * _data;
    bool  _invalidated;
}

@property (nonatomic, readonly) BSAction *_BSAction;
@property (nonatomic, readonly) STKSessionBehavior *behavior;
@property (nonatomic, readonly) <BSXPCCoding> *sessionData;

+ (id)_sessionActionFromBSAction:(id)arg1;

- (void).cxx_destruct;
- (id)_BSAction;
- (id)_init;
- (id)_initWithBSAction:(id)arg1;
- (id)behavior;
- (void)dealloc;
- (id)initWithBehavior:(id)arg1 data:(id)arg2 responseBlock:(id /* block */)arg3;
- (void)invalidate;
- (void)sendResponse:(long long)arg1;
- (void)sendResponse:(long long)arg1 withContext:(id)arg2;
- (id)sessionData;

@end
