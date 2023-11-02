
@interface AAUIOBInheritanceSetupCompleteViewModel : AAOBInheritanceSetupCompleteModel <AAUIOBWelcomeControllerViewModelProtocol> {
    UIView * _contentView;
    long long  _contentViewLayout;
    UIImage * _image;
    UIView * _secondaryView;
}

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
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)contentView;
- (long long)contentViewLayout;
- (id)image;
- (id)initWithBeneficiaryName:(id)arg1 accessKeyShareType:(unsigned long long)arg2;
- (id)secondaryView;
- (void)setContentView:(id)arg1;
- (void)setContentViewLayout:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setSecondaryView:(id)arg1;

@end
