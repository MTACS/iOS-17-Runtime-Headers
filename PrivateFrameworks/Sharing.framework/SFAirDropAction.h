
@interface SFAirDropAction : NSObject <NSSecureCoding> {
    id /* block */  _actionHandler;
    NSString * _actionIdentifier;
    NSString * _localizedTitle;
    unsigned long long  _maxTransferState;
    unsigned long long  _minRequiredTransferState;
    bool  _requiresUnlockedUI;
    bool  _shouldUpdateUserResponse;
    NSString * _singleItemLocalizedTitle;
    NSString * _transferIdentifier;
    long long  _type;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) unsigned long long maxTransferState;
@property (nonatomic) unsigned long long minRequiredTransferState;
@property (nonatomic) bool requiresUnlockedUI;
@property (nonatomic) bool shouldUpdateUserResponse;
@property (nonatomic, copy) NSString *singleItemLocalizedTitle;
@property (nonatomic, readonly, copy) NSString *transferIdentifier;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;
+ (id)testActionWithTitle:(id)arg1 actionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (id)actionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransferIdentifier:(id)arg1 actionIdentifier:(id)arg2 title:(id)arg3 singleItemTitle:(id)arg4 type:(long long)arg5;
- (id)initWithTransferIdentifier:(id)arg1 actionIdentifier:(id)arg2 title:(id)arg3 singleItemTitle:(id)arg4 type:(long long)arg5 handler:(id /* block */)arg6;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (unsigned long long)maxTransferState;
- (unsigned long long)minRequiredTransferState;
- (bool)requiresUnlockedUI;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMaxTransferState:(unsigned long long)arg1;
- (void)setMinRequiredTransferState:(unsigned long long)arg1;
- (void)setRequiresUnlockedUI:(bool)arg1;
- (void)setShouldUpdateUserResponse:(bool)arg1;
- (void)setSingleItemLocalizedTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (bool)shouldUpdateUserResponse;
- (id)singleItemLocalizedTitle;
- (id)transferIdentifier;
- (void)triggerAction;
- (long long)type;

@end
