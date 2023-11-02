
@interface HMDCameraClipImportVideoSegmentMetadata : NSObject {
    double  _duration;
    bool  _header;
    NSString * _resourcePath;
}

@property (readonly) double duration;
@property (getter=isHeader, readonly) bool header;
@property (readonly, copy) NSString *resourcePath;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithVideoSegmentMetadata:(id)arg1;
- (bool)isHeader;
- (id)resourcePath;

@end
