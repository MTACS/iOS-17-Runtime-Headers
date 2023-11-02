
@protocol BMCommunicationsAccountContentEvent

@required

- (NSArray *)accountHandles;
- (NSString *)accountIdentifier;
- (NSString *)accountType;
- (BMNamedHandle *)fromHandle;
- (NSArray *)toHandles;

@optional

- (NSArray *)bccHandles;
- (NSArray *)ccHandles;

@end
