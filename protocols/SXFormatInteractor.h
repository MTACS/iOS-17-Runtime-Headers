
@protocol SXFormatInteractor <NSObject>

@required

- (<SXFormatInteractorDelegate> *)delegate;
- (void)setDelegate:(id <SXFormatInteractorDelegate>)arg1;
- (void)updateWithPresentationEnvironment:(id <SXPresentationEnvironment>)arg1;

@end
