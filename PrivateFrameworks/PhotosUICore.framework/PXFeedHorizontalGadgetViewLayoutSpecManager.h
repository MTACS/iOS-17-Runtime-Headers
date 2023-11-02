
@interface PXFeedHorizontalGadgetViewLayoutSpecManager : PXFeedViewLayoutSpecManager <PXChangeObserver> {
    PXGadgetSpec * _gadgetSpec;
    PXGadgetSpecManager * _gadgetSpecManager;
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) PXGadgetSpecManager *gadgetSpecManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateGadgetSpec;
- (void)_invalidateSpec;
- (void)_updateGadgetSpec;
- (void)_updateSpec;
- (id)gadgetSpec;
- (id)gadgetSpecManager;
- (id)init;
- (id)initWithGadgetSpec:(id)arg1 style:(long long)arg2;
- (id)initWithGadgetSpecManager:(id)arg1 style:(long long)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setGadgetSpec:(id)arg1;
- (long long)style;

@end
