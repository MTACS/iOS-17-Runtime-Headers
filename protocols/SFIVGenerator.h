
@protocol SFIVGenerator <NSObject>

@required

- (NSData *)generateIVWithLength:(long long)arg1 error:(id*)arg2;

@end
