
@interface CRCameraReaderOutputIDCard : CRCameraReaderOutput

@property (readonly) NSString *capturePath;
@property (readonly) UIImage *imageValue;
@property (readonly) NSArray *targetVertices;
@property (readonly) NSArray *vertices;

- (id)capturePath;
- (id)imageValue;
- (id)targetVertices;
- (id)vertices;

@end
