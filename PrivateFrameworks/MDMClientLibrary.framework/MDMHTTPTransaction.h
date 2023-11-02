
@interface MDMHTTPTransaction : DMCHTTPTransaction {
    bool  _isCheckIn;
}

@property (nonatomic, readonly) bool isCheckIn;

+ (id)reauthRequiredMAIDError;
+ (id)reauthRequiredThirdPartyError;
+ (id)unauthorizedByServerError;

- (void)_commonInit:(struct __SecIdentity { }*)arg1 timeout:(unsigned long long)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(bool)arg4 signMessage:(bool)arg5 rmAccountID:(id)arg6;
- (id)initWithURL:(id)arg1 data:(id)arg2 identity:(struct __SecIdentity { }*)arg3 pinnedCertificates:(id)arg4 pinningRevocationCheckRequired:(bool)arg5 signMessage:(bool)arg6 isCheckin:(bool)arg7 isShortTransaction:(bool)arg8 rmAccountID:(id)arg9;
- (id)initWithURL:(id)arg1 downloadURL:(id)arg2 identity:(struct __SecIdentity { }*)arg3 pinnedCertificates:(id)arg4 pinningRevocationCheckRequired:(bool)arg5 signMessage:(bool)arg6 isShortTransaction:(bool)arg7 rmAccountID:(id)arg8;
- (id)initWithURL:(id)arg1 identity:(struct __SecIdentity { }*)arg2 pinnedCertificates:(id)arg3 pinningRevocationCheckRequired:(bool)arg4 signMessage:(bool)arg5 isShortTransaction:(bool)arg6 rmAccountID:(id)arg7;
- (bool)isCheckIn;

@end
