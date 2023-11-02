
@protocol HKSPMutableObject <HKSPObject>

@required

- (HKSPChangeSet *)changeSet;
- (void)freeze;
- (NSDate *)lastModifiedDate;
- (<HKSPObject> *)originalObject;
- (void)revert;
- (void)setLastModifiedDate:(NSDate *)arg1;

@end
