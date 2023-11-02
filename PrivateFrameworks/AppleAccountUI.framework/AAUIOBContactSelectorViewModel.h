
@interface AAUIOBContactSelectorViewModel : NSObject <AAUIOBTableWelcomeControllerViewModelProtocol> {
    bool  _adoptTableViewScrollView;
    UIView * _contentView;
    long long  _contentViewLayout;
    NSString * _detailText;
    NSString * _helpLinkTitle;
    NSString * _helpLinkURL;
    UIImage * _image;
    <AAOBWelcomeControllerModelProtocol> * _model;
    NSString * _primaryButton;
    NSString * _secondaryButton;
    UIView * _secondaryView;
    NSArray * _suggestedContacts;
    long long  _tableViewStyle;
    NSString * _title;
}

@property (nonatomic) bool adoptTableViewScrollView;
@property (nonatomic, copy) UIView *contentView;
@property (nonatomic) long long contentViewLayout;
@property (nonatomic, copy) AACustodianshipInfo *custodianshipInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *helpLinkTitle;
@property (nonatomic, copy) NSString *helpLinkURL;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *leftBarButton;
@property (nonatomic, copy) NSString *ownerHandle;
@property (nonatomic, copy) NSString *primaryButton;
@property (nonatomic, copy) NSString *recipientHandle;
@property (nonatomic, copy) NSString *secondaryButton;
@property (nonatomic, copy) UIView *secondaryView;
@property (nonatomic, retain) NSArray *suggestedContacts;
@property (readonly) Class superclass;
@property (nonatomic) long long tableViewStyle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_modelForFlow:(unsigned long long)arg1;
- (void)_prepareModelForFlow:(unsigned long long)arg1;
- (bool)adoptTableViewScrollView;
- (id)contentView;
- (long long)contentViewLayout;
- (id)detailText;
- (id)helpLinkTitle;
- (id)helpLinkURL;
- (id)image;
- (id)initWithFlow:(unsigned long long)arg1;
- (id)primaryButton;
- (id)secondaryButton;
- (id)secondaryView;
- (void)setAdoptTableViewScrollView:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewLayout:(long long)arg1;
- (void)setDetailText:(id)arg1;
- (void)setHelpLinkTitle:(id)arg1;
- (void)setHelpLinkURL:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (void)setSecondaryView:(id)arg1;
- (void)setSuggestedContacts:(id)arg1;
- (void)setTableViewStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)suggestedContacts;
- (long long)tableViewStyle;
- (id)title;

@end
