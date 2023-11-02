
@interface HMIVideoAnalyzerMutableReportSession : HMFObject <NSSecureCoding> {
    NSMutableArray * _fragments;
    NSString * _source;
}

@property (readonly) NSMutableArray *fragments;
@property (copy) NSString *source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendFragmentResult:(id)arg1 redactFrames:(bool)arg2;
- (id)attributeDescriptions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fragments;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
