
@interface AATrustedContactsInheritanceSplashScreenModel : NSObject <AAOBBulletedWelcomeControllerModelProtocol> {
    NSString * _detailText;
    NSString * _helpLinkTitle;
    NSString * _helpLinkURL;
}

@property (nonatomic, copy) AACustodianshipInfo *custodianshipInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *helpLinkTitle;
@property (nonatomic, copy) NSString *helpLinkURL;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic) bool isWalrusEnabled;
@property (nonatomic, copy) NSString *leftBarButton;
@property (nonatomic, copy) NSString *ownerHandle;
@property (nonatomic, copy) NSString *primaryButton;
@property (nonatomic, copy) NSString *recipientHandle;
@property (nonatomic, copy) NSString *secondaryButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_firstBulletPointDescription;
- (id)_firstBulletPointSymbolName;
- (id)_firstBulletPointTitle;
- (id)_secondBulletPointDescription;
- (id)_secondBulletPointSymbolName;
- (id)_secondBulletPointTitle;
- (id)_thirdBulletPointDescription;
- (id)_thirdBulletPointSymbolName;
- (id)_thirdBulletPointTitle;
- (id)bullets;
- (id)detailText;
- (id)helpLinkTitle;
- (id)helpLinkURL;
- (id)imageName;
- (id)primaryButton;
- (id)secondaryButton;
- (void)setDetailText:(id)arg1;
- (void)setHelpLinkTitle:(id)arg1;
- (void)setHelpLinkURL:(id)arg1;
- (id)title;

@end
