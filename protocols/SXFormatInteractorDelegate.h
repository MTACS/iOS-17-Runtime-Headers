
@protocol SXFormatInteractorDelegate <NSObject>

@optional

- (void)displayContentsAfterLayoutWithInteractor:(id <SXFormatInteractor>)arg1;
- (void)hideContentsForLayoutWithInteractor:(id <SXFormatInteractor>)arg1;
- (void)interactor:(id <SXFormatInteractor>)arg1 cancelledLayoutWithOptions:(SXLayoutOptions *)arg2;
- (void)interactor:(id <SXFormatInteractor>)arg1 didIntegrateBlueprint:(SXLayoutBlueprint *)arg2;
- (void)interactor:(id <SXFormatInteractor>)arg1 willIntegrateBlueprint:(SXLayoutBlueprint *)arg2;
- (void)interactor:(id <SXFormatInteractor>)arg1 willLayoutWithOptions:(SXLayoutOptions *)arg2;

@end
