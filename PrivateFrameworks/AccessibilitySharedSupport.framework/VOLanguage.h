
@interface VOLanguage : NSManagedObject

@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, copy) NSString *languageID;
@property (nonatomic, retain) VOSubstitution *substitution;

+ (id)fetchRequest;

@end
