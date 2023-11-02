
@interface COBrowserObserver : NSObject {
    id /* block */  _block;
}

@property (nonatomic, readonly, copy) id /* block */ block;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithBlock:(id /* block */)arg1;

@end
