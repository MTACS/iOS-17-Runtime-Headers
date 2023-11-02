
@interface VOVoice : NSManagedObject

@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, retain) VOSubstitution *substitution;
@property (nonatomic, copy) NSString *voiceID;

+ (id)fetchRequest;

@end
