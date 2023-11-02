
@interface QLFileThumbnailRequest : NSObject {
    unsigned long long  _badgeType;
    NSString * _contentType;
    NSURL * _fileURL;
    NSDictionary * _generationData;
    int  _iconFlavor;
    int  _interpolationQuality;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    double  _scale;
    bool  _wantsLowQuality;
}

@property (nonatomic) unsigned long long badgeType;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, retain) NSDictionary *generationData;
@property int iconFlavor;
@property (nonatomic) int interpolationQuality;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumSize;
@property (nonatomic) double scale;
@property (nonatomic) bool wantsLowQuality;

- (void).cxx_destruct;
- (unsigned long long)badgeType;
- (id)contentType;
- (id)description;
- (id)fileURL;
- (id)generationData;
- (int)iconFlavor;
- (id)initWithMaximumSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 iconFlavor:(int)arg5 contentType:(id)arg6 fileURL:(id)arg7 generationData:(id)arg8 interpolationQuality:(int)arg9 wantsLowQuality:(bool)arg10;
- (int)interpolationQuality;
- (struct CGSize { double x1; double x2; })maximumSize;
- (struct CGSize { double x1; double x2; })minimumSize;
- (double)scale;
- (void)setBadgeType:(unsigned long long)arg1;
- (void)setContentType:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setGenerationData:(id)arg1;
- (void)setIconFlavor:(int)arg1;
- (void)setInterpolationQuality:(int)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setWantsLowQuality:(bool)arg1;
- (bool)wantsLowQuality;

@end
