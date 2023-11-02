
@interface SFHighlightContactList : UIView <SFHighlightContactListCellDelegate> {
    NSArray * _contacts;
    UILabel * _headerLabel;
    id /* block */  _infoViewControllerHandler;
    SFHighlightContactListButton * _manageButton;
    NSLayoutConstraint * _manageButtonTopConstraintForEmptyList;
    NSLayoutConstraint * _manageButtonTopConstraintForNonEmptyList;
    id /* block */  _manageHandler;
    bool  _needsResizeAfterLayout;
    id /* block */  _resizeHandler;
    id /* block */  _rowTapHandler;
    UIStackView * _stackView;
}

@property (nonatomic, copy) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ infoViewControllerHandler;
@property (nonatomic, copy) id /* block */ manageHandler;
@property (nonatomic, copy) id /* block */ resizeHandler;
@property (nonatomic, copy) id /* block */ rowTapHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didTapManage:(id)arg1;
- (void)_updateList;
- (void)cellDidReceiveTap:(id)arg1;
- (id)contacts;
- (id /* block */)infoViewControllerHandler;
- (id)initWithContacts:(id)arg1;
- (void)layoutSubviews;
- (id /* block */)manageHandler;
- (id /* block */)resizeHandler;
- (id /* block */)rowTapHandler;
- (void)setContacts:(id)arg1;
- (void)setInfoViewControllerHandler:(id /* block */)arg1;
- (void)setManageHandler:(id /* block */)arg1;
- (void)setResizeHandler:(id /* block */)arg1;
- (void)setRowTapHandler:(id /* block */)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
