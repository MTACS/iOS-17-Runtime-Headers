
@interface HMBMutableModelField : HMBModelField

@property (nonatomic, retain) id defaultValue;
@property (nonatomic) unsigned long long loggingVisibility;
@property (getter=isOptional, nonatomic) bool optional;
@property (nonatomic, copy) HMFVersion *readonlyVersion;
@property (nonatomic, copy) HMFVersion *unavailableVersion;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
