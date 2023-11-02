
@interface BBCommunicationContext : NSObject <NSCopying, NSSecureCoding> {
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
    BBContact * _sender;
    bool  _systemImage;
}

@property (nonatomic, readonly, copy) NSString *associatedObjectUri;
@property (readonly) BLTPBCommunicationContext *blt_protobuf;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (getter=isBusinessCorrespondence, nonatomic, readonly) bool businessCorrespondence;
@property (nonatomic, readonly) long long capabilities;
@property (nonatomic, readonly, copy) NSURL *contentURL;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) NSData *imageDataForContentURL;
@property (nonatomic, readonly, copy) NSString *imageName;
@property (nonatomic, readonly) bool mentionsCurrentUser;
@property (nonatomic, readonly) bool notifyRecipientAnyway;
@property (nonatomic, readonly) unsigned long long recipientCount;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (getter=isReplyToCurrentUser, nonatomic, readonly) bool replyToCurrentUser;
@property (nonatomic, readonly, copy) BBContact *sender;
@property (nonatomic, readonly) bool systemImage;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

+ (id)communicationContextWithIdentifier:(id)arg1 associatedObjectUri:(id)arg2 displayName:(id)arg3 sender:(id)arg4 recipients:(id)arg5 contentURL:(id)arg6 imageName:(id)arg7 systemImage:(bool)arg8 mentionsCurrentUser:(bool)arg9 notifyRecipientAnyway:(bool)arg10 replyToCurrentUser:(bool)arg11 recipientCount:(unsigned long long)arg12;
+ (id)communicationContextWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 associatedObjectUri:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7;
+ (id)communicationContextWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 associatedObjectUri:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7 imageName:(id)arg8 systemImage:(bool)arg9 mentionsCurrentUser:(bool)arg10 notifyRecipientAnyway:(bool)arg11 replyToCurrentUser:(bool)arg12 recipientCount:(unsigned long long)arg13;
+ (id)communicationContextWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 associatedObjectUri:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7 mentionsCurrentUser:(bool)arg8 notifyRecipientAnyway:(bool)arg9 replyToCurrentUser:(bool)arg10 recipientCount:(unsigned long long)arg11;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 associatedObjectUri:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7 imageName:(id)arg8 systemImage:(bool)arg9 mentionsCurrentUser:(bool)arg10 notifyRecipientAnyway:(bool)arg11 replyToCurrentUser:(bool)arg12 recipientCount:(unsigned long long)arg13 capabilities:(long long)arg14 businessCorrespondence:(bool)arg15;
- (id)associatedObjectUri;
- (id)bundleIdentifier;
- (long long)capabilities;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (bool)isBusinessCorrespondence;
- (bool)isEqual:(id)arg1;
- (bool)isReplyToCurrentUser;
- (bool)mentionsCurrentUser;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)notifyRecipientAnyway;
- (unsigned long long)recipientCount;
- (id)recipients;
- (id)sender;
- (bool)systemImage;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

+ (id)communicationContextFromProtobuf:(id)arg1;
+ (id)writeContentURLIfPossibleFromProtobuf:(id)arg1;

- (id)blt_protobuf;
- (id)imageDataForContentURL;

@end
