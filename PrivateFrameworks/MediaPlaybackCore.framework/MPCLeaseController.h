
@interface MPCLeaseController : NSObject <MFLeaseControlling> {
    _MPCLeaseManager * _leaseManager;
    <MFPlaybackStackController> * _stackController;
    MPCMediaFoundationTranslator * _translator;
}

@property (nonatomic, readonly) _MPCLeaseManager *leaseManager;
@property (nonatomic) <MFPlaybackStackController> *stackController;
@property (nonatomic, readonly) MPCMediaFoundationTranslator *translator;

- (void).cxx_destruct;
- (id)initWithTranslator:(id)arg1 leaseManager:(id)arg2;
- (id)leaseManager;
- (void)relinquishLeaseForItem:(id)arg1 completion:(id /* block */)arg2;
- (void)requestLeaseForItem:(id)arg1 completion:(id /* block */)arg2;
- (void)setStackController:(id)arg1;
- (id)stackController;
- (id)translator;

@end
