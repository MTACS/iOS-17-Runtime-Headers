
@interface PKPaymentTransactionCellController : NSObject {
    PKContactResolver * _contactResolver;
    unsigned long long  _context;
    UIImage * _emptyImage;
    PKPaymentTransactionIconGenerator * _iconGenerator;
}

@property (nonatomic, readonly) PKContactResolver *contactResolver;

- (void).cxx_destruct;
- (void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3;
- (void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3;
- (void)configureCell:(id)arg1 forTransaction:(id)arg2 transactionSource:(id)arg3 familyMember:(id)arg4 account:(id)arg5 detailStyle:(long long)arg6 deviceName:(id)arg7 avatarViewDelegate:(id)arg8;
- (id)contactResolver;
- (id)initWithContactResolver:(id)arg1;
- (id)initWithContactResolver:(id)arg1 context:(unsigned long long)arg2;

@end
