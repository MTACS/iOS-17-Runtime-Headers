
@interface PKContactAvatarManager : NSObject {
    PKContactResolver * _contactResolver;
    NSMutableDictionary * _dictionaryAvatars;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockAvatars;
    <PKPaymentDataProvider> * _paymentDataProvider;
    CNAvatarImageRenderer * _renderer;
    <CNAvatarImageRenderingScope> * _scope;
}

- (void).cxx_destruct;
- (void)_avatarForAltDSID:(id)arg1 dsid:(id)arg2 handles:(id)arg3 contact:(id)arg4 completion:(id /* block */)arg5;
- (void)avatarForFamilyMember:(id)arg1 accountUser:(id)arg2 invitation:(id)arg3 completion:(id /* block */)arg4;
- (void)avatarForFamilyMember:(id)arg1 completion:(id /* block */)arg2;
- (void)avatarForFamilyMember:(id)arg1 peerPaymentAccount:(id)arg2 invitation:(id)arg3 completion:(id /* block */)arg4;
- (id)cachedAvatarForAltDSID:(id)arg1;
- (id)initWithContactResolver:(id)arg1 paymentDataProvider:(id)arg2;

@end
