
@interface MADRequest : NSObject <NSSecureCoding> {
    NSError * _error;
    NSArray * _results;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *results;

// Image: /System/Library/PrivateFrameworks/MediaAnalysisServices.framework/MediaAnalysisServices

+ (bool)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)results;
- (void)setError:(id)arg1;
- (void)setResults:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

- (id)vcp_taskWithImageAsset:(id)arg1 andSignpostPayload:(id)arg2;

@end
