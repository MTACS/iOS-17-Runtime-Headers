
@interface AXSDResultsCollector : NSObject <AXSDDetectorManagerDelegate> {
    bool  _didFinish;
    NSError * _error;
    NSMutableArray * _results;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool didFinish;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *results;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)didFinish;
- (id)error;
- (id)init;
- (void)receivedCompletion:(id)arg1;
- (void)receivedError:(id)arg1 fromDetector:(id)arg2;
- (void)receivedObservation:(id)arg1 forDetector:(id)arg2;
- (id)results;

@end
