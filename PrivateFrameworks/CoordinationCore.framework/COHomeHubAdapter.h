
@interface COHomeHubAdapter : NSObject {
    NSObject * _client;
    NSObject * _list;
}

@property (nonatomic, readonly) NSObject *client;
@property (nonatomic, readonly) NSObject *list;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accessoryForPeerInstance:(id)arg1 usingHomeKitAdapter:(id)arg2;
- (id)accessoryIdentifierForPeerInstance:(id)arg1 usingHomeKitAdapter:(id)arg2;
- (id)client;
- (id)init;
- (id)list;

@end
