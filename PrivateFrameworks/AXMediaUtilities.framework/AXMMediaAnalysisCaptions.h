
@interface AXMMediaAnalysisCaptions : NSObject <NSSecureCoding> {
    NSArray * _classificationIdentifiers;
    double  _confidence;
    bool  _isLowConfidence;
    NSString * _text;
}

@property (nonatomic, readonly) NSArray *classificationIdentifiers;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) bool isLowConfidence;
@property (nonatomic, readonly) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classificationIdentifiers;
- (double)confidence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 confidence:(double)arg2 isLowConfidence:(bool)arg3 classificationIdentifiers:(id)arg4;
- (bool)isLowConfidence;
- (id)text;

@end
