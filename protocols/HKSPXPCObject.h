
@protocol HKSPXPCObject <NSSecureCoding, NSCopying, NSObject>

@required

- (id)objectWithSyncAnchor:(id <HKSPSyncAnchor>)arg1;
- (<HKSPSyncAnchor> *)syncAnchor;

@end
