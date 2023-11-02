
@interface _DPPTRecordMO : NSManagedObject

@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *privateValue;
@property (nonatomic) long long reportVersion;
@property (nonatomic) bool submitted;

+ (id)fetchRequest;

@end
