
@protocol HKSPSyncAnchor <NSSecureCoding, NSCopying, NSObject>

@required

- (long long)compare:(id <HKSPSyncAnchor>)arg1;
- (id)hksp_increment;

@end
