
@interface TSWPTwoPartAction : NSObject {
    id /* block */  _cancelAction;
    id /* block */  _finishAction;
    bool  _performImmediately;
    id /* block */  _startAction;
}

@property bool performImmediately;

+ (id)actionWithStartAction:(id /* block */)arg1 cancelAction:(id /* block */)arg2 finishAction:(id /* block */)arg3;

- (void)cancel;
- (void)dealloc;
- (id)initWithStartAction:(id /* block */)arg1 cancelAction:(id /* block */)arg2 finishAction:(id /* block */)arg3;
- (void)performFinishAction;
- (bool)performImmediately;
- (void)performStartAction;
- (void)setPerformImmediately:(bool)arg1;

@end
