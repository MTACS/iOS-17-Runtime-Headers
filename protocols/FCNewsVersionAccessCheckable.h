
@protocol FCNewsVersionAccessCheckable <NFCopying>

@required

- (NSString *)identifier;
- (long long)minimumNewsVersion;

@end
