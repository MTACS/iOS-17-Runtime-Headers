
@interface IETestParseError : NSObject {
    NSString * _error;
    NSString * _flowId;
}

@property (nonatomic, retain) NSString *error;
@property (nonatomic, retain) NSString *flowId;

- (void).cxx_destruct;
- (id)error;
- (id)flowId;
- (void)setError:(id)arg1;
- (void)setFlowId:(id)arg1;

@end
