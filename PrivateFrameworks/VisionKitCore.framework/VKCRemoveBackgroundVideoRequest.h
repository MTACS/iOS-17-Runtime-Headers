
@interface VKCRemoveBackgroundVideoRequest : NSObject {
    NSString * _identifier;
    NSValue * _instancePoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _madRequestID;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maskTime;
    NSNumber * _maxDimension;
    NSNumber * _maxFileSize;
    NSNumber * _minDimension;
    UTType * _outputType;
    VKCImageAnalyzerRequest * _photosRequest;
    NSArray * _stickerIDs;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSValue *instancePoint;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) int madRequestID;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maskTime;
@property (nonatomic, retain) NSNumber *maxDimension;
@property (nonatomic, retain) NSNumber *maxFileSize;
@property (nonatomic, retain) NSNumber *minDimension;
@property (nonatomic, copy) UTType *outputType;
@property (nonatomic, retain) VKCImageAnalyzerRequest *photosRequest;
@property (nonatomic, retain) NSArray *stickerIDs;

- (void).cxx_destruct;
- (id)createMADPreviewRequest;
- (id)createMADRequest;
- (id)identifier;
- (id)initWithPhotosAnalyzerRequest:(id)arg1;
- (id)instancePoint;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (int)madRequestID;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maskTime;
- (id)maxDimension;
- (id)maxFileSize;
- (id)minDimension;
- (id)outputType;
- (id)photosRequest;
- (void)setIdentifier:(id)arg1;
- (void)setInstancePoint:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setMadRequestID:(int)arg1;
- (void)setMaskTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxDimension:(id)arg1;
- (void)setMaxFileSize:(id)arg1;
- (void)setMinDimension:(id)arg1;
- (void)setOutputType:(id)arg1;
- (void)setPhotosRequest:(id)arg1;
- (void)setStickerIDs:(id)arg1;
- (id)stickerIDs;

@end
