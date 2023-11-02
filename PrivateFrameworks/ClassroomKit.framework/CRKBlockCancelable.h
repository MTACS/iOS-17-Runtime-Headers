
@interface CRKBlockCancelable : NSObject <CRKCancelable> {
    id /* block */  _block;
}

@property (nonatomic, copy) id /* block */ block;

+ (id)cancelableWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)cancel;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (void)setBlock:(id /* block */)arg1;

@end
