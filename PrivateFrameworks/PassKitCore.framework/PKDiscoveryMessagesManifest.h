
@interface PKDiscoveryMessagesManifest : NSObject {
    NSArray * _engagementMessages;
    NSArray * _notifications;
    long long  _version;
}

@property (nonatomic, readonly) NSArray *engagementMessages;
@property (nonatomic, readonly) NSArray *notifications;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (id)engagementMessages;
- (id)initWithDictionary:(id)arg1;
- (id)notifications;
- (long long)version;

@end
