
@interface _DPPrioRecordMO : NSManagedObject

@property (nonatomic) double creationDate;
@property (nonatomic) long long dimension;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic) long long reportVersion;
@property (nonatomic, retain) NSData *share1;
@property (nonatomic, retain) NSData *share2;
@property (nonatomic) bool submitted;

+ (id)fetchRequest;

@end
