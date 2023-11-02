
@protocol MXSessionProtocol

@optional

+ (NSArray *)copySetPropertiesOrder;
+ (bool)isSessionMuted:(unsigned long long)arg1;

- (NSDictionary *)copyProperties:(NSArray *)arg1 outPropertyErrors:(id*)arg2;
- (int)copyPropertyForKey:(NSString *)arg1 valueOut:(id*)arg2;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1 clientType:(unsigned char)arg2 mxCoreSessionID:(unsigned long long)arg3;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1 clientType:(unsigned char)arg2 remoteDeviceID:(NSString *)arg3;
- (id)initWithSession:(id)arg1;
- (int)setOrderedProperties:(NSArray *)arg1 usingErrorHandlingStrategy:(unsigned char)arg2 outPropertiesErrors:(id*)arg3;
- (int)setProperties:(NSDictionary *)arg1 usingErrorHandlingStrategy:(unsigned char)arg2 outPropertiesErrors:(id*)arg3;
- (int)setPropertyForKey:(NSString *)arg1 value:(NSObject *)arg2;

@end
