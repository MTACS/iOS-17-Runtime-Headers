
@interface AXSS_PunctuationGroup : NSManagedObject

@property (nonatomic, retain) NSSet *autoSwitchContexts;
@property (nonatomic, copy) NSUUID *basePunctuationUUID;
@property (nonatomic, copy) NSString *ckChangeTag;
@property (nonatomic, copy) NSDate *ckRecordProcessDate;
@property (nonatomic) bool inCloud;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic) short version;

+ (id)fetchRequest;

@end
