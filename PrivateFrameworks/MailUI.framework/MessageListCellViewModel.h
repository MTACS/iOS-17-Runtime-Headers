
@interface MessageListCellViewModel : MessageItemViewModel <MessageListCellViewModelBuilder> {
    NSString * _address;
    bool  _addressIsPresent;
    NSArray * _addressList;
    NSAttributedString * _attributedAddress;
    NSArray * _emailAddresses;
    bool  _hideFollowUp;
    NSDictionary * _hintsBySnippetZone;
    long long  _recipientType;
    long long  _style;
    NSString * _subject;
    bool  _subjectIsPresent;
}

@property (getter=isVIP, nonatomic) bool VIP;
@property (nonatomic, copy) NSString *address;
@property (nonatomic) bool addressIsPresent;
@property (nonatomic, copy) NSArray *addressList;
@property (nonatomic, copy) NSAttributedString *attributedAddress;
@property (getter=isBlockedSender, nonatomic) bool blockedSender;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *displayDate;
@property (nonatomic, copy) NSArray *emailAddresses;
@property (nonatomic, copy) NSIndexSet *flagColors;
@property (getter=isFlagged, nonatomic) bool flagged;
@property (nonatomic, copy) EMFollowUp *followUp;
@property (getter=isForwarded, nonatomic) bool forwarded;
@property (nonatomic) bool hasAttachments;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideFollowUp;
@property (nonatomic, copy) NSDictionary *hintsBySnippetZone;
@property (getter=isMute, nonatomic) bool mute;
@property (getter=isNotify, nonatomic) bool notify;
@property (getter=isRead, nonatomic) bool read;
@property (nonatomic, copy) NSDate *readLaterDate;
@property (nonatomic) long long recipientType;
@property (getter=isReplied, nonatomic) bool replied;
@property (nonatomic, copy) NSDate *sendLaterDate;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic) bool subjectIsPresent;
@property (readonly) Class superclass;
@property (nonatomic) long long unsubscribeType;

- (void).cxx_destruct;
- (id)address;
- (bool)addressIsPresent;
- (id)addressList;
- (id)attributedAddress;
- (id)emailAddresses;
- (bool)hideFollowUp;
- (id)hintsBySnippetZone;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithItemBuilder:(id /* block */)arg1;
- (long long)recipientType;
- (void)setAddress:(id)arg1;
- (void)setAddressIsPresent:(bool)arg1;
- (void)setAddressList:(id)arg1;
- (void)setAttributedAddress:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setHideFollowUp:(bool)arg1;
- (void)setHintsBySnippetZone:(id)arg1;
- (void)setRecipientType:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSubject:(id)arg1;
- (void)setSubjectIsPresent:(bool)arg1;
- (long long)style;
- (id)subject;
- (bool)subjectIsPresent;

@end
