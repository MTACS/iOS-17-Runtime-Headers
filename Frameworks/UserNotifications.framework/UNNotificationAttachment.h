
@interface UNNotificationAttachment : NSObject <NSCopying, NSSecureCoding, UNNotificationSecurityScopeProviding> {
    NSURL * _URL;
    NSString * _identifier;
    UNNotificationAttachmentOptions * _options;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _securityScopeLock;
    UNSecurityScopedURL * _securityScopedURL;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long family;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) UNNotificationAttachmentOptions *options;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)attachmentWithIdentifier:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_encodableURL;
- (void)_withSecurityScopeLock:(id /* block */)arg1;
- (void)addSecurityScope:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enterSecurityScope;
- (unsigned long long)family;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 URL:(id)arg2 type:(id)arg3 options:(id)arg4;
- (id)initWithIdentifier:(id)arg1 family:(unsigned long long)arg2 URL:(id)arg3 type:(id)arg4 options:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)leaveSecurityScope;
- (id)options;
- (void)removeSecurityScope;
- (id)type;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

+ (void)blt_swizzleEncodeWithCoder;

- (id)_blt_encodedShouldAddNotificationAttachmentOptions;
- (void)_blt_setEncodedShouldAddNotificationAttachmentOptions:(id)arg1;
- (void)blt_encodeWithCoder:(id)arg1;
- (void)blt_postEncodeNotificationAttachmentOptions;
- (void)blt_preEncodeShouldAddNotificationAttachmentOptions;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

+ (id)_systemDirectoryURL;
+ (unsigned long long)stagingActionForFileHandle:(id)arg1 fromLocalClientConnection:(id)arg2 orFromServiceExtensionOfBundleProxy:(id)arg3 error:(id*)arg4;

@end
