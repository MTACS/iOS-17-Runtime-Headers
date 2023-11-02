
@interface DCDispatchAfterBlocks : NSObject {
    <NSCopying> * _identifier;
}

@property (nonatomic, copy) <NSCopying> *identifier;

- (void).cxx_destruct;
- (void)cancelAll;
- (void)dealloc;
- (void)dispatchAfter:(double)arg1 withBlock:(id /* block */)arg2;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)performBlock:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;

@end
