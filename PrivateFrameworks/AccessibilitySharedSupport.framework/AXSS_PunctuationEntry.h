
@interface AXSS_PunctuationEntry : NSManagedObject

@property (nonatomic, copy) NSString *ckChangeTag;
@property (nonatomic, copy) NSDate *ckRecordProcessDate;
@property (nonatomic, copy) NSUUID *groupUUID;
@property (nonatomic) bool inCloud;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, copy) NSString *punctuation;
@property (nonatomic, copy) NSString *replacement;
@property (nonatomic, copy) NSString *rule;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic) short version;

+ (id)fetchRequest;

@end
