
@interface AAUIiCloudMediaUsageInfo : NSObject {
    float  _bytesUsed;
    NSString * _displayLabel;
    NSString * _mediaType;
    UIColor * _representativeColor;
}

@property (nonatomic) float bytesUsed;
@property (nonatomic, retain) NSString *displayLabel;
@property (nonatomic, retain) NSString *mediaType;
@property (nonatomic, retain) UIColor *representativeColor;

- (void).cxx_destruct;
- (float)bytesUsed;
- (id)capacityBarCatagory;
- (id)displayLabel;
- (id)initWithMediaType:(id)arg1 representativeColor:(id)arg2 bytesUsed:(float)arg3;
- (id)mediaType;
- (id)representativeColor;
- (void)setBytesUsed:(float)arg1;
- (void)setDisplayLabel:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setRepresentativeColor:(id)arg1;

@end
