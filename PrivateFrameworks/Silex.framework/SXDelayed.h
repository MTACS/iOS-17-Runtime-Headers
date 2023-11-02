
@interface SXDelayed : NSObject {
    id /* block */  _block;
    bool  _cancelled;
    SXDelayed * _strongReference;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) bool cancelled;
@property (nonatomic, retain) SXDelayed *strongReference;

+ (id)execute:(id /* block */)arg1 delay:(double)arg2;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)cancel;
- (bool)cancelled;
- (id)initWithBlock:(id /* block */)arg1 delay:(double)arg2;
- (void)invoke;
- (void)setBlock:(id /* block */)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setStrongReference:(id)arg1;
- (id)strongReference;

@end
