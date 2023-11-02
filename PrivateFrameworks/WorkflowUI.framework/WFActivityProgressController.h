
@interface WFActivityProgressController : NSObject {
    void alertController;
    void title;
    void viewController;
}

@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (void)presentFrom:(id)arg1 cancellationHandler:(id /* block */)arg2;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
