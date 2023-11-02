
@interface _DPBSSFPRecordMO : NSManagedObject

@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *privateValue;
@property (nonatomic) long long reportVersion;
@property (nonatomic) long long segmentIndex;
@property (nonatomic) bool submitted;
@property (nonatomic, retain) NSString *tableVersion;
@property (nonatomic) bool verificationMode;

+ (id)fetchRequest;

@end
