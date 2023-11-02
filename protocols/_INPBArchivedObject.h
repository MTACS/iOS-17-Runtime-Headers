
@protocol _INPBArchivedObject <NSObject>

@required

- (bool)hasMessageData;
- (bool)hasTypeName;
- (NSData *)messageData;
- (void)setMessageData:(NSData *)arg1;
- (void)setTypeName:(NSString *)arg1;
- (NSString *)typeName;

@end
