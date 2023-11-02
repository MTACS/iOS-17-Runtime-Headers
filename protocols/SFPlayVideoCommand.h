
@protocol SFPlayVideoCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setUrl:(NSURL *)arg1;
- (NSURL *)url;

@end
