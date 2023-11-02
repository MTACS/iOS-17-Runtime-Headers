
@interface PSURLControllerHandler : NSObject {
    NSObject<PSURLControllerHandlerDelegate> * _delegate;
}

@property (nonatomic) NSObject<PSURLControllerHandlerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
