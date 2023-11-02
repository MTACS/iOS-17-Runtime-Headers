
@interface HMDCoordinationAddOnImpl : COMeshAddOn {
    <HMDCoordinationAddOnImplDelegate> * _delegate;
}

@property (nonatomic) <HMDCoordinationAddOnImplDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)didChangeNodesForMeshController:(id)arg1;
- (void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;

@end
