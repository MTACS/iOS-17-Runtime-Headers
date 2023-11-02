
@interface ATXModeEntityScore : NSObject <ATXModeEntityJsonProtocol, NSSecureCoding> {
    NSDictionary * _featureVector;
    double  _score;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSDictionary *featureVector;
@property (nonatomic) double score;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureVector;
- (id)initWithCoder:(id)arg1;
- (id)initWithScore:(double)arg1 featureVector:(id)arg2 uuid:(id)arg3;
- (id)jsonDict;
- (double)score;
- (void)setFeatureVector:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
