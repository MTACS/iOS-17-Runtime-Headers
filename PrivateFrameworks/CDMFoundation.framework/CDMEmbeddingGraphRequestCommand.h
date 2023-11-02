
@interface CDMEmbeddingGraphRequestCommand : CDMServiceGraphCommand {
    SIRINLUEXTERNALRequestID * _requestId;
    NSString * _text;
}

@property (nonatomic, readonly) SIRINLUEXTERNALRequestID *requestId;
@property (nonatomic, readonly) NSString *text;

+ (id)serviceGraphName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 requestId:(id)arg2;
- (id)loggingRequestID;
- (id)requestId;
- (id)text;

@end
