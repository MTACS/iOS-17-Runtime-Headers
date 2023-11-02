
@interface _DPOBHRecordMO : NSManagedObject

@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) long long reportVersion;
@property (nonatomic) bool submitted;

@end
