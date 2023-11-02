
@protocol SFArchiveViewCardSection <SFCardSection>

@required

- (NSData *)archive;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setArchive:(NSData *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
