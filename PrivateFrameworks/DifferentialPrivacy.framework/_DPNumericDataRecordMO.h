
@interface _DPNumericDataRecordMO : NSManagedObject

@property (nonatomic) double clearNumber;
@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) double privateNumber;
@property (nonatomic) long long reportVersion;
@property (nonatomic) bool submitted;

@end
