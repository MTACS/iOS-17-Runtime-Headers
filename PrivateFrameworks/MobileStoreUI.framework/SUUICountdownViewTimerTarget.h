
@interface SUUICountdownViewTimerTarget : NSObject {
    id /* block */  _actionBlock;
}

@property (nonatomic, copy) id /* block */ actionBlock;

- (void).cxx_destruct;
- (void)action;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;

@end
