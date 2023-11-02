
@interface VUIImageInfoManagedObject : NSManagedObject

@property (nonatomic) double canonicalHeight;
@property (nonatomic) double canonicalWidth;
@property (nonatomic, retain) VUIImageDataManagedObject *imageData;
@property (nonatomic) long long imageType;
@property (nonatomic, copy) NSString *urlFormat;

@end
