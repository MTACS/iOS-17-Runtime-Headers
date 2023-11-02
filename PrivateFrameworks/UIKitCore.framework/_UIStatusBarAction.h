
@interface _UIStatusBarAction : NSObject {
    id /* block */  _block;
    bool  _enabled;
}

@property (nonatomic, copy) id /* block */ block;
@property (getter=isEnabled, nonatomic) bool enabled;

+ (id)actionWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)block;
- (bool)isEnabled;
- (void)performWithStatusBar:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setBlock:(id /* block */)arg1;
- (void)setEnabled:(bool)arg1;

@end
