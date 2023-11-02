
@interface PXProtoFeaturePlaceholderView : PXProtoFeatureView <PXChangeObserver> {
    double  _preferredStatusWidth;
    PXPhotoAnalysisStatusController * _statusController;
    NSString * _statusDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double preferredStatusWidth;
@property (nonatomic, readonly, copy) NSString *statusDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setStatusDescription:(id)arg1;
- (void)_updateStatusDescription;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (double)preferredStatusWidth;
- (id)statusDescription;
- (void)statusDescriptionDidChange;

@end