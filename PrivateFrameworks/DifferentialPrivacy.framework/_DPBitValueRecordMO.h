
@interface _DPBitValueRecordMO : NSManagedObject

@property (nonatomic) short clearBitValue;
@property (nonatomic) double creationDate;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *privateBitValueStr;
@property (nonatomic) long long reportVersion;
@property (nonatomic) bool submitted;

+ (id)fetchRequest;

@end
