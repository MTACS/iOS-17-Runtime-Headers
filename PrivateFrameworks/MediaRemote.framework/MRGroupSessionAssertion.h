
@interface MRGroupSessionAssertion : NSObject {
    bool  _cancelled;
    id /* block */  _handler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithCancellationHandler:(id /* block */)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
