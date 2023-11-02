
@interface VKCRemoveBackgroundRequest : NSObject {
    struct CGImage { } * _CGImage;
    NSNumber * _VIImageType;
    NSNumber * _animatedStickerScore;
    bool  _cropToFit;
    NSString * _identifier;
    long long  _imageOrientation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _maskOnly;
    bool  _performInPlace;
    VKCImageAnalyzerRequest * _photosRequest;
    struct __CVBuffer { } * _pixelBuffer;
    int  _requestID;
    NSIndexSet * _selectedIndexSet;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic) int MADRequestID;
@property (nonatomic, retain) NSNumber *VIImageType;
@property (nonatomic, retain) NSNumber *animatedStickerScore;
@property (nonatomic) bool cropToFit;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic) bool maskOnly;
@property (nonatomic) bool performInPlace;
@property (nonatomic, readonly) VKCImageAnalyzerRequest *photosRequest;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, retain) NSIndexSet *selectedIndexSet;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)requestWithImage:(struct CGImage { }*)arg1 orientation:(long long)arg2 canResize:(bool)arg3;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (int)MADRequestID;
- (id)VIImageType;
- (id)animatedStickerScore;
- (id)createMADRequest;
- (bool)cropToFit;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (long long)imageOrientation;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(long long)arg2;
- (id)initWithPhotosAnalyzerRequest:(id)arg1;
- (bool)maskOnly;
- (bool)performInPlace;
- (id)photosRequest;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)selectedIndexSet;
- (void)setAnimatedStickerScore:(id)arg1;
- (void)setCropToFit:(bool)arg1;
- (void)setMADRequestID:(int)arg1;
- (void)setMaskOnly:(bool)arg1;
- (void)setPerformInPlace:(bool)arg1;
- (void)setSelectedIndexSet:(id)arg1;
- (void)setVIImageType:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
