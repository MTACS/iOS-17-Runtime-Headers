
@protocol SFTextCopyItem <SFCopyItem>

@required

- (NSString *)copyableString;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setCopyableString:(NSString *)arg1;

@end
