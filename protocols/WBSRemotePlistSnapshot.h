
@protocol WBSRemotePlistSnapshot <NSObject>

@required

- (id)initWithPlistData:(NSData *)arg1 error:(id*)arg2;
- (NSData *)plistDataWithFormat:(unsigned long long)arg1;

@end
