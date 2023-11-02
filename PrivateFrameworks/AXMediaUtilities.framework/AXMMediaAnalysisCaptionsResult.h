
@interface AXMMediaAnalysisCaptionsResult : NSObject <NSSecureCoding> {
    NSArray * _imageCaptionResults;
}

@property (nonatomic, readonly) NSArray *imageCaptionResults;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageCaptionResults;
- (id)initWithCoder:(id)arg1;
- (void)setImageCaptionResults:(id)arg1;

@end
