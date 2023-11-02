
@protocol HMDTimeBasedFlagSpecifying <NSSecureCoding, NSCopying, NSObject>

@required

- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
