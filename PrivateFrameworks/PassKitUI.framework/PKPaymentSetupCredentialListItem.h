
@interface PKPaymentSetupCredentialListItem : PKPaymentSetupListItem <NSCopying, PKPassSnapshotCoordinatableSource> {
    PKPaymentCredential * _credential;
    bool  _isAvailable;
    bool  _isBeingProvisioned;
    bool  _isCellDisabled;
    bool  _isRefund;
    bool  _isSnapshotFetchInProgress;
    bool  _isUnavailable;
    unsigned long long  _lastCheckedCredentialHash;
    UIImage * _passSnapshot;
}

@property (nonatomic, readonly) PKPaymentCredential *credential;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAvailable;
@property (nonatomic) bool isBeingProvisioned;
@property (nonatomic) bool isCellDisabled;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic) bool isRefund;
@property (nonatomic) bool isSnapshotFetchInProgress;
@property (nonatomic) bool isUnavailable;
@property (nonatomic) unsigned long long lastCheckedCredentialHash;
@property (nonatomic, retain) UIImage *passSnapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credential;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCredential:(id)arg1;
- (bool)isAvailable;
- (bool)isBeingProvisioned;
- (bool)isCellDisabled;
- (bool)isDeletable;
- (bool)isEqual:(id)arg1;
- (bool)isRefund;
- (bool)isSnapshotFetchInProgress;
- (bool)isUnavailable;
- (unsigned long long)lastCheckedCredentialHash;
- (id)passSnapshot;
- (void)setIsAvailable:(bool)arg1;
- (void)setIsBeingProvisioned:(bool)arg1;
- (void)setIsCellDisabled:(bool)arg1;
- (void)setIsRefund:(bool)arg1;
- (void)setIsSnapshotFetchInProgress:(bool)arg1;
- (void)setIsUnavailable:(bool)arg1;
- (void)setLastCheckedCredentialHash:(unsigned long long)arg1;
- (void)setPassSnapshot:(id)arg1;

@end
