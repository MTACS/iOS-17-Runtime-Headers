
@interface _PSSuggestionProxy : NSObject <ATXSuggestionExecutableProtocol, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _contactID;
    NSString * _groupName;
    NSString * _handle;
    NSArray * _handles;
    INImage * _image;
    NSString * _interactionRecipients;
    NSString * _reason;
    NSString * _reasonType;
    bool  _useGroupsWhenFindingRecipient;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *contactID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly, copy) NSArray *handles;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INImage *image;
@property (nonatomic, readonly, copy) NSString *interactionRecipients;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly, copy) NSString *reasonType;
@property (nonatomic, readonly, copy) NSString *suggestionKey;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useGroupsWhenFindingRecipient;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)contactID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (id)handle;
- (id)handles;
- (unsigned long long)hash;
- (id)image;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 groupName:(id)arg7 image:(id)arg8;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 image:(id)arg7;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 useGroupsWhenFindingRecipient:(bool)arg7;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handles:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 useGroupsWhenFindingRecipient:(bool)arg7 groupName:(id)arg8 image:(id)arg9;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 reason:(id)arg4 reasonType:(id)arg5;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 handles:(id)arg3 reason:(id)arg4 reasonType:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)interactionRecipients;
- (bool)isEqual:(id)arg1;
- (id)reason;
- (id)reasonType;
- (id)suggestionKey;
- (bool)useGroupsWhenFindingRecipient;

@end
