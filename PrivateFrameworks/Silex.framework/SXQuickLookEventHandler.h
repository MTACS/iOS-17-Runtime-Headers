
@interface SXQuickLookEventHandler : NSObject <SXQuickLookEventHandler, SXQuickLookInteractorDelegate> {
    <SXQuickLookInteractor> * _interactor;
    <SXQuickLookRouter> * _router;
    <SXQuickLookEventHandlerDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXQuickLookEventHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXQuickLookInteractor> *interactor;
@property (nonatomic, readonly) <SXQuickLookRouter> *router;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)didLoadThumbnail:(id)arg1;
- (void)didTapThumbnailView:(id)arg1;
- (void)failedToLoadThumbnail;
- (id)initWithInteractor:(id)arg1 router:(id)arg2;
- (id)interactor;
- (void)requestThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)router;
- (void)setDelegate:(id)arg1;

@end
