
@interface UNNotificationResponse : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    NSString * _actionIdentifier;
    UNNotification * _notification;
    NSString * _originIdentifier;
    BSServiceConnectionEndpoint * _targetConnectionEndpoint;
    NSString * _targetSceneIdentifier;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UNNotification *notification;
@property (nonatomic, readonly, copy) NSString *originIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *targetConnectionEndpoint;
@property (nonatomic, readonly) UIScene *targetScene;
@property (nonatomic, readonly) NSString *targetSceneIdentifier;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5;
- (id)actionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)notification;
- (id)originIdentifier;
- (id)targetConnectionEndpoint;
- (id)targetSceneIdentifier;

// Image: /System/Library/PrivateFrameworks/TeaFoundation.framework/TeaFoundation

+ (id)responseWithNotification:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)targetScene;

@end
