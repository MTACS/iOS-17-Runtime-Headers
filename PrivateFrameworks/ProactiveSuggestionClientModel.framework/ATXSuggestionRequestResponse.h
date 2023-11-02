
@interface ATXSuggestionRequestResponse : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    NSError * _error;
    NSData * _feedbackMetadata;
    ATXSuggestionRequest * _originalRequest;
    int  _responseCode;
    NSArray * _suggestions;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSData *feedbackMetadata;
@property (nonatomic, readonly) ATXSuggestionRequest *originalRequest;
@property (nonatomic, readonly) int responseCode;
@property (nonatomic, readonly) NSArray *suggestions;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)dataFromNSError:(id)arg1;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)feedbackMetadata;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSuggestions:(id)arg1 feedbackMetadata:(id)arg2 originalRequest:(id)arg3 responseCode:(int)arg4 error:(id)arg5;
- (id)initWithSuggestions:(id)arg1 feedbackMetadata:(id)arg2 originalRequest:(id)arg3 responseCode:(int)arg4 error:(id)arg5 uuid:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)originalRequest;
- (id)proto;
- (int)responseCode;
- (id)suggestions;
- (id)unarchivedNSErrorFromData:(id)arg1;
- (id)uuid;

@end
