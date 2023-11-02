
@protocol _SFPBTextCopyItem <NSObject>

@required

- (NSString *)copyableString;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCopyableString:(NSString *)arg1;

@end
