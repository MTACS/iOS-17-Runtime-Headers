
@interface HMIVideoAnalyzerResultOutcome : HMFObject <NSSecureCoding> {
    double  _analysisFPS;
    unsigned long long  _code;
    NSString * _message;
}

@property (readonly) double analysisFPS;
@property (readonly) unsigned long long code;
@property (readonly) bool isSkipped;
@property (readonly) bool isSuccess;
@property (readonly) NSString *message;

+ (id)skipped;
+ (id)success;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)analysisFPS;
- (unsigned long long)code;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCode:(unsigned long long)arg1 analysisFPS:(double)arg2 message:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isSkipped;
- (bool)isSuccess;
- (id)message;

@end
