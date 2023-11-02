
@interface SIRINLUResponse : NSObject <NSSecureCoding> {
    NSArray * _parses;
    NSArray * _repetitionResults;
    SIRINLURequestID * _requestId;
    SIRINLUResponseStatus * _responseStatus;
}

@property (nonatomic, retain) NSArray *parses;
@property (nonatomic, retain) NSArray *repetitionResults;
@property (nonatomic, retain) SIRINLURequestID *requestId;
@property (nonatomic, retain) SIRINLUResponseStatus *responseStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestId:(id)arg1 parses:(id)arg2;
- (id)initWithRequestId:(id)arg1 parses:(id)arg2 repetitionResults:(id)arg3;
- (id)parses;
- (id)repetitionResults;
- (id)requestId;
- (id)responseStatus;
- (void)setParses:(id)arg1;
- (void)setRepetitionResults:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setResponseStatus:(id)arg1;

@end
