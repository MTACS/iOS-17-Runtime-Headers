
@interface PXCMMStatusController : NSObject <PXChangeObserver> {
    PXMomentShareStatusPresentation * _statusPresentation;
    PXStatusViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXStatusViewModel *viewModel;

- (void).cxx_destruct;
- (void)_updateWithChangeDescriptor:(unsigned long long)arg1;
- (id)init;
- (id)initWithStatusPresentation:(id)arg1 viewModel:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)viewModel;

@end
