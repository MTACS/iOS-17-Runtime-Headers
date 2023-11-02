
@interface PKPaymentSetupAssistantCredential : PKPaymentSetupAssistantCoreCredential <PKPassSnapshotCoordinatableSource> {
    bool  _isSnapshotFetchInProgress;
    UIImage * _passSnapshot;
}

@property (nonatomic, readonly) PKPaymentCredential *credential;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSnapshotFetchInProgress;
@property (nonatomic, retain) UIImage *passSnapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)isSnapshotFetchInProgress;
- (id)passSnapshot;
- (void)setIsSnapshotFetchInProgress:(bool)arg1;
- (void)setPassSnapshot:(id)arg1;

@end
