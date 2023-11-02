
@interface CAXPredictionContext : NSObject <ATXProtoBufWrapper, ATXSuggestionExecutableProtocol, NSSecureCoding> {
    double  _absoluteDate;
    NSArray * _contents;
    NSArray * _previousActions;
    NSString * _searchTerm;
    NSString * _sourceAppName;
    NSDate * _suggestionDate;
}

@property (nonatomic, retain) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *previousActions;
@property (nonatomic, readonly, copy) NSString *searchTerm;
@property (nonatomic, copy) NSString *sourceAppName;
@property (nonatomic, retain) NSDate *suggestionDate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForint32_t:(int)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)contents;
- (id)date;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAbsoluteDate:(double)arg1 sourceAppName:(id)arg2 contents:(id)arg3 previousActions:(id)arg4 searchTerm:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSuggestionDate:(id)arg1 sourceAppName:(id)arg2 contents:(id)arg3 previousActions:(id)arg4 searchTerm:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCAXPredictionContext:(id)arg1;
- (id)json;
- (id)jsonRawData;
- (id)previousActions;
- (id)proto;
- (id)searchTerm;
- (void)setContents:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setPreviousActions:(id)arg1;
- (void)setSourceAppName:(id)arg1;
- (void)setSuggestionDate:(id)arg1;
- (id)sourceAppName;
- (id)suggestionDate;

@end
