
@protocol HMDBackingStoreRecordMapping <NSObject>

@required

- (NSUUID *)parentUuid;
- (NSString *)recordName;
- (NSString *)type;
- (NSUUID *)uuid;

@end
