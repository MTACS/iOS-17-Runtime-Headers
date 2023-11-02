
@interface TTSVBCloudVoiceModelFileMO : NSManagedObject

@property (nonatomic) short apiVersion;
@property (nonatomic, retain) <_NSFileBackedFuture> *fileFuture;
@property (nonatomic, retain) TTSVBCloudVoiceModelMO *model;
@property (nonatomic, copy) NSString *relativePath;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
