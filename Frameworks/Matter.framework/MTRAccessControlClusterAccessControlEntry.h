
@interface MTRAccessControlClusterAccessControlEntry : MTRAccessControlClusterAccessControlEntryStruct

@property (nonatomic, copy) NSNumber *authMode;
@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) NSNumber *privilege;
@property (nonatomic, copy) NSArray *subjects;
@property (nonatomic, copy) NSArray *targets;

@end
