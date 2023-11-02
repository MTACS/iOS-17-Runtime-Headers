
@interface DKDiagnosticProgress : NSObject <NSSecureCoding> {
    NSNumber * _estimatedTimeRemaining;
    NSNumber * _fractionCompleted;
    bool  _isIndeterminate;
}

@property (nonatomic, readonly) NSNumber *estimatedTimeRemaining;
@property (nonatomic, readonly) NSNumber *fractionCompleted;
@property (nonatomic, readonly) bool isIndeterminate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_validateProperties;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedTimeRemaining;
- (id)fractionCompleted;
- (id)initWithCoder:(id)arg1;
- (id)initWithProgress:(id)arg1;
- (bool)isIndeterminate;

@end
