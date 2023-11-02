
@interface ATXProactiveSuggestionScoreSpecification : NSObject <ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    double  _rawScore;
    long long  _suggestedConfidenceCategory;
}

@property (nonatomic) double rawScore;
@property (nonatomic) long long suggestedConfidenceCategory;

+ (id)stringForSuggestedConfidenceCategory:(long long)arg1;
+ (bool)supportsSecureCoding;

- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (bool)fuzzyIsEqualToScoreSpecification:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithRawScore:(double)arg1 suggestedConfidenceCategory:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonRawData;
- (id)proto;
- (double)rawScore;
- (void)setRawScore:(double)arg1;
- (void)setSuggestedConfidenceCategory:(long long)arg1;
- (long long)suggestedConfidenceCategory;

@end
