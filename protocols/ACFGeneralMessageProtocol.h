
@protocol ACFGeneralMessageProtocol <NSCopying, NSObject, NSCoding>

@required

- (id)copy;
- (NSString *)identifier;
- (NSDictionary *)info;
- (NSString *)senderPortName;
- (int)senderProcessID;
- (NSString *)senderProcessName;
- (void)setIdentifier:(NSString *)arg1;
- (void)setInfo:(NSDictionary *)arg1;
- (void)setSenderPortName:(NSString *)arg1;
- (void)setSenderProcessID:(int)arg1;
- (void)setSenderProcessName:(NSString *)arg1;

@end
