
@interface PVImage : NSObject {
    struct CGImage { } * _CGImage;
    CIImage * _CIImage;
    id  _adjustmentVersion;
    unsigned long long  _assetHeight;
    unsigned long long  _assetWidth;
    unsigned long long  _bytesPerRow;
    NSString * _groupingIdentifier;
    unsigned long long  _height;
    NSData * _imageData;
    NSURL * _imageURL;
    unsigned int  _orientation;
    unsigned long long  _orientedHeight;
    unsigned long long  _orientedWidth;
    unsigned long long  _width;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) CIImage *CIImage;
@property (nonatomic, readonly, copy) id adjustmentVersion;
@property (nonatomic, readonly) unsigned long long assetHeight;
@property (nonatomic, readonly) unsigned long long assetWidth;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) NSString *groupingIdentifier;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly, copy) NSURL *imageURL;
@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, readonly) unsigned long long orientedHeight;
@property (nonatomic, readonly) unsigned long long orientedWidth;
@property (nonatomic, readonly) unsigned long long width;

+ (id)imageWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 adjustmentVersion:(id)arg3 creationDate:(id)arg4;
+ (id)imageWithCIImage:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 orientation:(unsigned int)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6;
+ (id)imageWithData:(id)arg1 imageCreationOptions:(id)arg2 assetWidth:(unsigned long long)arg3 assetHeight:(unsigned long long)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6;
+ (id)imageWithURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 imageCreationOptions:(id)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (id)CIImage;
- (id)adjustmentVersion;
- (unsigned long long)assetHeight;
- (unsigned long long)assetWidth;
- (unsigned long long)bytesPerRow;
- (void)dealloc;
- (id)groupingIdentifier;
- (unsigned long long)height;
- (id)imageData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForNormalizedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageURL;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 adjustmentVersion:(id)arg3 creationDate:(id)arg4;
- (id)initWithCIImage:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 orientation:(unsigned int)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6;
- (id)initWithData:(id)arg1 imageCreationOptions:(id)arg2 assetWidth:(unsigned long long)arg3 assetHeight:(unsigned long long)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6;
- (id)initWithURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 imageCreationOptions:(id)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6;
- (unsigned int)orientation;
- (unsigned long long)orientedHeight;
- (unsigned long long)orientedWidth;
- (unsigned long long)width;

@end
