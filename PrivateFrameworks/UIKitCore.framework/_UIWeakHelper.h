
@interface _UIWeakHelper : NSObject {
    id /* block */  _deallocationBlock;
}

@property (nonatomic, copy) id /* block */ deallocationBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)deallocationBlock;
- (id)initWithDeallocationBlock:(id /* block */)arg1;
- (void)invalidate;
- (void)setDeallocationBlock:(id /* block */)arg1;

@end
