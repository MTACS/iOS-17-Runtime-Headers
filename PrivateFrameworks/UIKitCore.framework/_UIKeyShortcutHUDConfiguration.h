
@interface _UIKeyShortcutHUDConfiguration : NSObject <NSSecureCoding> {
    _UIKeyShortcutHUDClientTraits * _clientTraits;
    long long  _initialHeldModifierFlags;
    _UIKeyShortcutHUDModel * _model;
    long long  _presentedModifierFlag;
    bool  _searching;
}

@property (nonatomic, retain) _UIKeyShortcutHUDClientTraits *clientTraits;
@property (nonatomic) long long initialHeldModifierFlags;
@property (nonatomic, retain) _UIKeyShortcutHUDModel *model;
@property (nonatomic) long long presentedModifierFlag;
@property (getter=isSearching, nonatomic) bool searching;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientTraits;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)initialHeldModifierFlags;
- (bool)isSearching;
- (id)model;
- (long long)presentedModifierFlag;
- (void)setClientTraits:(id)arg1;
- (void)setInitialHeldModifierFlags:(long long)arg1;
- (void)setModel:(id)arg1;
- (void)setPresentedModifierFlag:(long long)arg1;
- (void)setSearching:(bool)arg1;

@end
