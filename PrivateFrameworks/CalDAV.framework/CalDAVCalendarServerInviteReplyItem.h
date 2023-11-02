
@interface CalDAVCalendarServerInviteReplyItem : CoreDAVItem {
    NSURL * _acceptedURL;
    NSString * _firstName;
    CoreDAVItemWithHrefChildItem * _hostURL;
    CoreDAVHrefItem * _href;
    CoreDAVLeafItem * _inReplyTo;
    CoreDAVItemWithNoChildren * _inviteStatus;
    NSString * _lastName;
    CoreDAVLeafItem * _summary;
}

@property (nonatomic, retain) NSURL *acceptedURL;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) CoreDAVItemWithHrefChildItem *hostURL;
@property (nonatomic, retain) CoreDAVHrefItem *href;
@property (nonatomic, retain) CoreDAVLeafItem *inReplyTo;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *inviteStatus;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) CoreDAVLeafItem *summary;

- (void).cxx_destruct;
- (id)acceptedURL;
- (id)copyParseRules;
- (id)firstName;
- (id)hostURL;
- (id)href;
- (id)inReplyTo;
- (id)init;
- (id)inviteStatus;
- (id)lastName;
- (void)setAcceptedURL:(id)arg1;
- (void)setAcceptedURLItem:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFirstNameItem:(id)arg1;
- (void)setHostURL:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setInReplyTo:(id)arg1;
- (void)setInviteStatus:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLastNameItem:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
