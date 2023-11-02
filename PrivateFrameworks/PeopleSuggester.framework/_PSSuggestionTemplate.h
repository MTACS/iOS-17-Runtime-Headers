
@interface _PSSuggestionTemplate : NSObject {
    NSString * _bundleID;
    NSDictionary * _contactIdToHandleMapping;
    NSString * _groupName;
    NSDictionary * _handleToDisplayNameMapping;
    INImage * _image;
    NSString * _interactionRecipients;
    NSString * _reason;
    NSString * _reasonType;
    NSArray * _recipientContactIDs;
    NSArray * _recipientDisplayNames;
    NSArray * _recipientEmailAddresses;
    NSArray * _recipientPhoneNumbers;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSDictionary *contactIdToHandleMapping;
@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic, readonly) NSDictionary *handleToDisplayNameMapping;
@property (nonatomic, readonly) INImage *image;
@property (nonatomic, readonly) NSString *interactionRecipients;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSString *reasonType;
@property (nonatomic, readonly) NSArray *recipientContactIDs;
@property (nonatomic, readonly) NSArray *recipientDisplayNames;
@property (nonatomic, readonly) NSArray *recipientEmailAddresses;
@property (nonatomic, readonly) NSArray *recipientPhoneNumbers;

- (void).cxx_destruct;
- (id)bundleID;
- (id)contactIdToHandleMapping;
- (id)description;
- (id)groupName;
- (id)handleToDisplayNameMapping;
- (id)image;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 image:(id)arg3 groupName:(id)arg4 recipientContactIDs:(id)arg5 recipientEmailAddresses:(id)arg6 recipientPhoneNumbers:(id)arg7 recipientDisplayNames:(id)arg8 contactIdToHandleMapping:(id)arg9 handleToDisplayNameMapping:(id)arg10 reason:(id)arg11 reasonType:(id)arg12;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 image:(id)arg3 groupName:(id)arg4 recipientContactIDs:(id)arg5 recipientEmailAddresses:(id)arg6 recipientPhoneNumbers:(id)arg7 recipientDisplayNames:(id)arg8 contactIdToHandleMapping:(id)arg9 reason:(id)arg10 reasonType:(id)arg11;
- (id)interactionRecipients;
- (id)reason;
- (id)reasonType;
- (id)recipientContactIDs;
- (id)recipientDisplayNames;
- (id)recipientEmailAddresses;
- (id)recipientPhoneNumbers;
- (id)suggestionWithContactIDMapping:(id)arg1 phoneMapping:(id)arg2 emailMapping:(id)arg3 contactStore:(id)arg4 contactKeysToFetch:(id)arg5;

@end
