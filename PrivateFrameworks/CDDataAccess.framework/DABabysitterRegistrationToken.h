
@interface DABabysitterRegistrationToken : NSObject {
    id /* block */  _unregisterBlock;
}

@property (nonatomic, copy) id /* block */ unregisterBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (void)setUnregisterBlock:(id /* block */)arg1;
- (id /* block */)unregisterBlock;

@end
