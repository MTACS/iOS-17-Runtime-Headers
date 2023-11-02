
@interface SBPIPContentViewLayoutMetrics : NSObject {
    NSString * _contentTypeIdentifier;
    double  _defaultCornerRadius;
    unsigned long long  _defaultPosition;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumStashedTabSize;
    double  _padding;
    double  _paddingWhileStashed;
    bool  _prefersDefaultPosition;
    SBPIPContentViewLayoutMetricsSizePolicy * _sizePolicy;
}

@property (nonatomic, readonly, copy) NSString *contentTypeIdentifier;
@property (nonatomic, readonly) double defaultCornerRadius;
@property (nonatomic, readonly) unsigned long long defaultPosition;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumStashedTabSize;
@property (nonatomic, readonly) double padding;
@property (nonatomic, readonly) double paddingWhileStashed;
@property (nonatomic, readonly) bool prefersDefaultPosition;
@property (nonatomic, readonly) SBPIPContentViewLayoutMetricsSizePolicy *sizePolicy;

+ (void)microPIPLandscapeSizePreferences:(id*)arg1 portraitSizePreferences:(id*)arg2 squareSizePreferences:(id*)arg3;
+ (double)minimumLandscapePadding;
+ (id)pegasusDefaultMetrics;
+ (id)pegasusDefaultMicroPIPMetrics;
+ (id)pegasusMetricsForContentType:(long long)arg1;
+ (id)pegasusQNBacklinkMetrics;
+ (id)pegasusScreenSharingMetrics;
+ (id)pegasusVideoCallMetrics;
+ (void)screenSharingLandscapeSizePreferences:(id*)arg1 portraitSizePreferences:(id*)arg2 squareSizePreferences:(id*)arg3;
+ (id)systemNotesMetricsForPresentationMode:(long long)arg1;
+ (double)unstashedPeripheryPadding;
+ (void)videoCallLandscapeSizePreferences:(id*)arg1 portraitSizePreferences:(id*)arg2 squareSizePreferences:(id*)arg3;
+ (void)videoContentLandscapeSizePreferences:(id*)arg1 portraitSizePreferences:(id*)arg2 squareSizePreferences:(id*)arg3;

- (void).cxx_destruct;
- (id)contentTypeIdentifier;
- (double)defaultCornerRadius;
- (unsigned long long)defaultPosition;
- (id)initWithContentTypeIdentifier:(id)arg1 padding:(double)arg2 paddingWhileStashed:(double)arg3 minimumStashedTabSize:(struct CGSize { double x1; double x2; })arg4 defaultCornerRadius:(double)arg5 sizePolicy:(id)arg6 defaultPosition:(unsigned long long)arg7;
- (id)initWithContentTypeIdentifier:(id)arg1 padding:(double)arg2 paddingWhileStashed:(double)arg3 minimumStashedTabSize:(struct CGSize { double x1; double x2; })arg4 defaultCornerRadius:(double)arg5 sizePolicy:(id)arg6 defaultPosition:(unsigned long long)arg7 prefersDefaultPosition:(bool)arg8;
- (struct CGSize { double x1; double x2; })minimumStashedTabSize;
- (double)padding;
- (double)paddingWhileStashed;
- (bool)prefersDefaultPosition;
- (id)sizePolicy;

@end
