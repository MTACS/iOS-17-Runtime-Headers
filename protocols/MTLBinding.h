
@protocol MTLBinding <NSObject>

@required

- (unsigned long long)access;
- (unsigned long long)index;
- (bool)isArgument;
- (bool)isUsed;
- (NSString *)name;
- (long long)type;

@end
