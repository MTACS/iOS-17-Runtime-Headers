
@interface ATXFakeAnchorModelPredictionForwarder : NSObject <ATXAnchorModelPredictionForwarderProtocol> {
    NSArray * _forwardedPredictions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *forwardedPredictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)forwardPredictions:(id)arg1;
- (id)forwardedPredictions;
- (id)init;

@end
