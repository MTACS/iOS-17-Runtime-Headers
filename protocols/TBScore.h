
@protocol TBScore <NSObject, NSSecureCoding>

@required

- (unsigned long long)score;
- (NSString *)typeDescription;

@end
