
@interface CDMServiceGraphCommand : CDMBaseCommand <NSSecureCoding> {
    CDMDataDispatcherContext * _dataDispatcherContext;
}

@property (nonatomic, retain) CDMDataDispatcherContext *dataDispatcherContext;

+ (id)serviceGraphName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataDispatcherContext;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loggingRequestID;
- (void)setDataDispatcherContext:(id)arg1;

@end
