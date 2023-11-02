
@interface ENStatusChangeObserver : NSObject {
    void active;
    void adapter;
    void didChangeHandler;
}

@property (nonatomic) bool active;

- (void).cxx_destruct;
- (bool)active;
- (void)dealloc;
- (id)init;
- (id)initWithAdapter:(id)arg1 didChangeHandler:(id /* block */)arg2;
- (void)setActive:(bool)arg1;

@end
