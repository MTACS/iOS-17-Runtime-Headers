
@interface TRINamespaceUpdateNotification : NSObject <TRINamespaceUpdateProtocol> {
    NSString * _namespaceName;
    <TRINotificationToken> * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int namespaceId;
@property (nonatomic, readonly) NSString *namespaceName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <TRINotificationToken> *token;

+ (void)deregisterUpdateWithToken:(id)arg1;
+ (id)notificationNameForNamespaceName:(id)arg1;
+ (bool)notifyUpdateForNamespaceName:(id)arg1;
+ (id)registerUpdateForNamespaceName:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)initWithNamespaceName:(id)arg1 token:(id)arg2;
- (unsigned int)namespaceId;
- (id)namespaceName;
- (id)token;

@end
