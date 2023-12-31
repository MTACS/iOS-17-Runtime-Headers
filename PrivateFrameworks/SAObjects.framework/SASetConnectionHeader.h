
@interface SASetConnectionHeader : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *aceHostHeader;
@property (nonatomic, retain) SAConnectionPolicy *connectionPolicy;
@property (nonatomic) bool reconnectNow;

+ (id)setConnectionHeader;
+ (id)setConnectionHeaderWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceHostHeader;
- (id)connectionPolicy;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)reconnectNow;
- (bool)requiresResponse;
- (void)setAceHostHeader:(id)arg1;
- (void)setConnectionPolicy:(id)arg1;
- (void)setReconnectNow:(bool)arg1;

@end
