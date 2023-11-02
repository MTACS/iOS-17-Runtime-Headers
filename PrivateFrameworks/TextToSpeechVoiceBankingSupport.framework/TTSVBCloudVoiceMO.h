
@interface TTSVBCloudVoiceMO : NSManagedObject

@property (nonatomic) short apiVersion;
@property (nonatomic, retain) NSSet *models;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *samples;
@property (nonatomic, copy) NSUUID *voiceID;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
