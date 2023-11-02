
@protocol SISchemaProvisional <NSObject>

@required

- (NSString *)getTypeId;
- (NSNumber *)getVersion;
- (bool)isProvisional;

@end
