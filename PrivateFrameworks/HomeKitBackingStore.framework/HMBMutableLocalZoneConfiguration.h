
@interface HMBMutableLocalZoneConfiguration : HMBLocalZoneConfiguration

@property (nonatomic) bool createIfNeeded;
@property (nonatomic) <HMBLocalZoneDelegate> *delegate;
@property (nonatomic, retain) HMBModelContainer *modelContainer;
@property (nonatomic) bool readOnly;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
