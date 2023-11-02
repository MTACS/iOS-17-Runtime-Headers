
@interface SBHFocusModePopoverView : SBHPopoverView <SBIconListLayoutObserver> {
    UILabel * _bodyLabel;
    UIButton * _closeButton;
    <SBHFocusModePopoverViewDelegate> * _delegate;
    UIButton * _editPageButton;
    SBIconListView * _iconListView;
    UIImageView * _imageView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) UIButton *closeButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SBHFocusModePopoverViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *editPageButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconListView *iconListView;
@property (nonatomic, retain) UIImageView *imageView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_closeButtonTapped:(id)arg1;
- (void)_editPageButtonTapped:(id)arg1;
- (void)_updateForUserInterfaceStyle;
- (id)bodyLabel;
- (id)closeButton;
- (id)delegate;
- (id)editPageButton;
- (id)iconListView;
- (void)iconListView:(id)arg1 didAddIconView:(id)arg2;
- (id)imageView;
- (id)initWithDelegate:(id)arg1 iconListView:(id)arg2;
- (void)setBodyLabel:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setEditPageButton:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
