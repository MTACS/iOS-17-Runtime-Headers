
@interface PKPassPresentationContext : NSObject {
    NSArray * _additionalPassUniqueIdentifiers;
    PKBackgroundContactlessInterfaceSessionController * _backgroundSession;
    NSData * _externalizedAuthenticationContext;
    bool  _fieldDetect;
    bool  _forcePayment;
    bool  _forcedFromButton;
    bool  _limitServerLoad;
    bool  _persistentCardEmulation;
    bool  _postPayment;
    bool  _presentFanned;
    unsigned long long  _presentationSource;
    long long  _standaloneTransactionType;
    <NSCopying> * _userInfo;
    bool  _wasAutomaticallySelected;
}

@property (nonatomic, copy) NSArray *additionalPassUniqueIdentifiers;
@property (nonatomic) PKBackgroundContactlessInterfaceSessionController *backgroundSession;
@property (nonatomic, retain) NSData *externalizedAuthenticationContext;
@property (getter=isFieldDetect, nonatomic) bool fieldDetect;
@property (getter=wantsForcedPayment, nonatomic) bool forcePayment;
@property (getter=wasForcedFromButton, nonatomic) bool forcedFromButton;
@property (nonatomic) bool limitServerLoad;
@property (getter=wantsPersistentCardEmulation, nonatomic) bool persistentCardEmulation;
@property (getter=isPostPayment, nonatomic) bool postPayment;
@property (nonatomic) bool presentFanned;
@property (nonatomic) unsigned long long presentationSource;
@property (nonatomic) long long standaloneTransactionType;
@property (nonatomic, copy) <NSCopying> *userInfo;
@property (nonatomic) bool wasAutomaticallySelected;

+ (id)contextWithAdditionalPassUniqueIdentifiers:(id)arg1;
+ (id)contextWithWasAutomaticallySelected:(bool)arg1 additionalPassUniqueIdentifiers:(id)arg2;
+ (id)contextWithWasAutomaticallySelected:(bool)arg1 additionalPassUniqueIdentifiers:(id)arg2 userInfo:(id)arg3;

- (void).cxx_destruct;
- (id)additionalPassUniqueIdentifiers;
- (id)backgroundSession;
- (id)description;
- (id)externalizedAuthenticationContext;
- (bool)isFieldDetect;
- (bool)isPostPayment;
- (bool)limitServerLoad;
- (bool)presentFanned;
- (unsigned long long)presentationSource;
- (void)setAdditionalPassUniqueIdentifiers:(id)arg1;
- (void)setBackgroundSession:(id)arg1;
- (void)setExternalizedAuthenticationContext:(id)arg1;
- (void)setFieldDetect:(bool)arg1;
- (void)setForcePayment:(bool)arg1;
- (void)setForcedFromButton:(bool)arg1;
- (void)setLimitServerLoad:(bool)arg1;
- (void)setPersistentCardEmulation:(bool)arg1;
- (void)setPostPayment:(bool)arg1;
- (void)setPresentFanned:(bool)arg1;
- (void)setPresentationSource:(unsigned long long)arg1;
- (void)setStandaloneTransactionType:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWasAutomaticallySelected:(bool)arg1;
- (long long)standaloneTransactionType;
- (id)userInfo;
- (bool)wantsForcedPayment;
- (bool)wantsPersistentCardEmulation;
- (bool)wasAutomaticallySelected;
- (bool)wasForcedFromButton;

@end
