
@interface MFConfirmationButton : MFDimmableButton {
    UIImage * _confirmationIcon;
    NSString * _confirmationLabel;
    NSString * _confirmationMessage;
    unsigned long long  _confirmationSelectionMode;
    unsigned long long  _confirmationType;
    id /* block */  _handlerBlock;
    bool  _hasPresentedConfirmation;
}

@property (nonatomic, retain) UIImage *confirmationIcon;
@property (nonatomic, copy) NSString *confirmationLabel;
@property (nonatomic, copy) NSString *confirmationMessage;
@property (nonatomic) unsigned long long confirmationSelectionMode;
@property (nonatomic) unsigned long long confirmationType;
@property (nonatomic, copy) id /* block */ handlerBlock;
@property (nonatomic) bool hasPresentedConfirmation;

+ (id)confirmationButtonWithMessage:(id)arg1 confirmationLabel:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_confirmationMenu;
- (void)_didConfirm;
- (bool)_isInConfirmableState;
- (void)_updateButtonAction;
- (id)confirmationIcon;
- (id)confirmationLabel;
- (id)confirmationMessage;
- (unsigned long long)confirmationSelectionMode;
- (unsigned long long)confirmationType;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id /* block */)handlerBlock;
- (bool)hasPresentedConfirmation;
- (void)reset;
- (void)setConfirmationIcon:(id)arg1;
- (void)setConfirmationLabel:(id)arg1;
- (void)setConfirmationMessage:(id)arg1;
- (void)setConfirmationSelectionMode:(unsigned long long)arg1;
- (void)setConfirmationType:(unsigned long long)arg1;
- (void)setHandlerBlock:(id /* block */)arg1;
- (void)setHasPresentedConfirmation:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
