
@interface SXQuickLookInteractor : NSObject <SXQuickLookInteractor> {
    SXQuickLookFile * _file;
    <SXQuickLookService> * _service;
    <SXQuickLookInteractorDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXQuickLookInteractorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXQuickLookFile *file;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXQuickLookService> *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)file;
- (id)initWithFile:(id)arg1 service:(id)arg2;
- (void)loadThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)service;
- (void)setDelegate:(id)arg1;

@end
