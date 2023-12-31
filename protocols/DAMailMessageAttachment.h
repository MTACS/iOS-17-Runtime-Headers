
@protocol DAMailMessageAttachment

@required

- (NSString *)displayName;
- (bool)isMostDefinitelyBase64ed;
- (NSString *)name;
- (NSNumber *)size;

@optional

- (unsigned long long)changeType;
- (NSString *)clientId;
- (NSString *)contentType;
- (NSString *)data;
- (bool)isInline;

@end
