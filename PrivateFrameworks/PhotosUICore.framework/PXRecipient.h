
@interface PXRecipient : NSObject <NSCopying, PXCMMInvitationParticipant, PXFaceTileImageCombinerItem> {
    NSSet * _allEmails;
    NSSet * _allPhones;
    CNContact * _contact;
    NSString * _emailAddressString;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _localizedName;
    NSString * _phoneNumberString;
    PXRecipientTransport * _suggestedTransport;
    NSSet * _unformattedAllPhones;
}

@property (nonatomic, readonly) NSSet *allEmails;
@property (nonatomic, readonly) NSSet *allPhones;
@property (nonatomic, readonly) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *emailAddressString;
@property (nonatomic, readonly, copy) NSString *emailAddressString;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) NSString *phoneNumberString;
@property (nonatomic, readonly, copy) NSString *phoneNumberString;
@property (nonatomic, retain) PXRecipientTransport *suggestedTransport;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *unformattedAllPhones;

+ (id)_contactForAddress:(id)arg1 recipientKind:(long long)arg2;
+ (id)new;

- (void).cxx_destruct;
- (id)allEmails;
- (id)allPhones;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddressString;
- (id)firstName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAddress:(id)arg1 nameComponents:(id)arg2 recipientKind:(long long)arg3;
- (id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4;
- (id)initWithEmailAddress:(id)arg1 phoneNumber:(id)arg2 nameComponents:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (id)localizedName;
- (id)phoneNumberString;
- (void)px_requestImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 isRTL:(bool)arg3 resultHandler:(id /* block */)arg4;
- (void)setSuggestedTransport:(id)arg1;
- (id)suggestedTransport;
- (id)unformattedAllPhones;

@end
