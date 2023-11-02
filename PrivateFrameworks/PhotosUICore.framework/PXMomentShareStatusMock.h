
@interface PXMomentShareStatusMock : PXMomentShareStatus {
    _PXMomentShareMockMomentShare * _mockMomentShare;
    <PXDisplayMomentShare> * _originalMomentShare;
}

+ (bool)shouldUseMockStatus;

- (void).cxx_destruct;
- (id)_actionManager;
- (id)_createStatusProvider;
- (void)_updateStatus;
- (void)dealloc;
- (id)initWithMomentShare:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)owner;

@end
