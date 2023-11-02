
@protocol GEOServerFormatStyle <NSObject, NSCoding>

@required

- (long long)styleType;
- (NSString *)token;

@end
