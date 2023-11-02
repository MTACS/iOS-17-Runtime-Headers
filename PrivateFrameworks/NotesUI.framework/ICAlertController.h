
@interface ICAlertController : UIAlertController {
    bool  _canAppearAbovePasswordEntryView;
    bool  _didDismissWithDismissWithoutActionBlock;
    bool  _didPerformAction;
    UIAlertAction * _dismissAction;
    id /* block */  _dismissWithoutActionBlock;
    bool  _shouldDismissWhenShowingNote;
}

@property (nonatomic) bool canAppearAbovePasswordEntryView;
@property (nonatomic) bool didDismissWithDismissWithoutActionBlock;
@property (nonatomic) bool didPerformAction;
@property (nonatomic, retain) UIAlertAction *dismissAction;
@property (nonatomic, copy) id /* block */ dismissWithoutActionBlock;
@property (nonatomic) bool shouldDismissWhenShowingNote;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)canAppearAbovePasswordEntryView;
- (void)commonInit;
- (void)dealloc;
- (bool)didDismissWithDismissWithoutActionBlock;
- (bool)didPerformAction;
- (id)dismissAction;
- (void)dismissWhenPossible;
- (id /* block */)dismissWithoutActionBlock;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setCanAppearAbovePasswordEntryView:(bool)arg1;
- (void)setDidDismissWithDismissWithoutActionBlock:(bool)arg1;
- (void)setDidPerformAction:(bool)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setDismissWithoutActionBlock:(id /* block */)arg1;
- (void)setShouldDismissWhenShowingNote:(bool)arg1;
- (bool)shouldDismissWhenShowingNote;

@end
