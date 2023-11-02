
@interface _UNNotificationCommunicationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _associatedObjectUri;
    NSString * _bundleIdentifier;
    bool  _businessCorrespondence;
    long long  _capabilities;
    NSURL * _contentURL;
    NSString * _displayName;
    NSString * _identifier;
    NSString * _imageName;
    bool  _mentionsCurrentUser;
    bool  _notifyRecipientAnyway;
    unsigned long long  _recipientCount;
    NSArray * _recipients;
    bool  _replyToCurrentUser;
    _UNNotificationContact * _sender;
    bool  _systemImage;
}

@property (nonatomic, readonly, copy) NSArray *allContacts;
@property (nonatomic, readonly, copy) NSString *associatedObjectUri;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (getter=isBusinessCorrespondence, nonatomic, readonly) bool businessCorrespondence;
@property (nonatomic, readonly) long long capabilities;
@property (nonatomic, readonly, copy) NSURL *contentURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDirect, nonatomic, readonly) bool direct;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (getter=isGroup, nonatomic, readonly) bool group;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *imageName;
@property (nonatomic, readonly) bool mentionsCurrentUser;
@property (nonatomic, readonly) bool notifyRecipientAnyway;
@property (nonatomic, readonly, copy) NSString *preferredDescription;
@property (nonatomic, readonly, copy) NSString *preferredRecipientsSummary;
@property (nonatomic, readonly, copy) NSString *preferredSenderSummary;
@property (nonatomic, readonly) unsigned long long recipientCount;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (getter=isReplyToCurrentUser, nonatomic, readonly) bool replyToCurrentUser;
@property (nonatomic, readonly, copy) _UNNotificationContact *sender;
@property (readonly) Class superclass;
@property (getter=isSystemImage, nonatomic, readonly) bool systemImage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_effectiveAllContactsCount;
- (unsigned long long)_effectiveRecipientCount;
- (id)_initWithIdentifier:(id)arg1 associatedObjectUri:(id)arg2 bundleIdentifier:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7 imageName:(id)arg8 systemImage:(bool)arg9 mentionsCurrentUser:(bool)arg10 notifyRecipientAnyway:(bool)arg11 replyToCurrentUser:(bool)arg12 recipientCount:(unsigned long long)arg13 capabilities:(long long)arg14 businessCorrespondence:(bool)arg15;
- (id)_summaryFromContacts:(id)arg1 effectiveCount:(unsigned long long)arg2 includeMe:(bool)arg3;
- (id)allContacts;
- (id)associatedObjectUri;
- (id)bundleIdentifier;
- (long long)capabilities;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (bool)isAvatarImagePossible;
- (bool)isAvatarImagePossibleForBundleIdentifier:(id)arg1;
- (bool)isBusinessCorrespondence;
- (bool)isDirect;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (bool)isReplyToCurrentUser;
- (bool)isSystemImage;
- (bool)mentionsCurrentUser;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)notifyRecipientAnyway;
- (id)preferredDescription;
- (id)preferredRecipientsSummary;
- (id)preferredSenderSummary;
- (unsigned long long)recipientCount;
- (id)recipients;
- (id)sender;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
