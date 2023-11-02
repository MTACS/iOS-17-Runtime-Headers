
@protocol LiveFSVolumeSearch

@required

- (void)searchResults:(NSString *)arg1 paths:(NSArray *)arg2 attributes:(NSData *)arg3 attributeSize:(unsigned int)arg4 xAttrs:(NSArray *)arg5 resumePath:(NSString *)arg6;
- (void)tokenDone:(NSString *)arg1 result:(int)arg2;

@end
