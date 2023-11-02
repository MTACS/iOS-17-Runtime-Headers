
@interface VUIImageDataManagedObject : NSManagedObject

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) VUIImageInfoManagedObject *imageInfo;

@end
