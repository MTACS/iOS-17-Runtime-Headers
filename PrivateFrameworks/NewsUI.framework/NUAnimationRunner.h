
@interface NUAnimationRunner : NSObject {
    id /* block */  _runBlock;
}

@property (nonatomic, readonly) id /* block */ runBlock;

- (void).cxx_destruct;
- (id)initWithRunBlock:(id /* block */)arg1;
- (id /* block */)runBlock;
- (void)runWithFinishBlock:(id /* block */)arg1;

@end
