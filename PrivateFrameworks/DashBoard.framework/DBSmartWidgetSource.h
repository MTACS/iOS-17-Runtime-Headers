
@interface DBSmartWidgetSource : NSObject {
    NSDictionary * _currentPredictions;
    <DBSmartWidgetSourceDelegate> * _delegate;
    bool  _disabled;
    NSDate * _lastRefresh;
    NSString * _sourceName;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSDictionary *currentPredictions;
@property (nonatomic, readonly) <DBSmartWidgetSourceDelegate> *delegate;
@property (nonatomic) bool disabled;
@property (nonatomic, retain) NSDate *lastRefresh;
@property (nonatomic, readonly) NSArray *predictions;
@property (nonatomic, readonly) NSString *sourceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (void)load;
+ (id)predictionClasses;
+ (void)registerSource:(Class)arg1;
+ (id)registeredSources;
+ (id)sourceName;

- (void).cxx_destruct;
- (id)currentPredictions;
- (bool)defaultsDisabled;
- (id)delegate;
- (id)description;
- (bool)disabled;
- (id)freshPredictions;
- (void)handleEvent:(id)arg1;
- (id)initWithDelegate:(id)arg1 resourceProvider:(id)arg2;
- (id)lastRefresh;
- (id)predictions;
- (void)refreshDisabled;
- (void)refreshPredictions;
- (void)setCurrentPredictions:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setLastRefresh:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)shouldKeepPrediction:(id)arg1;
- (id)sourceName;
- (id)workQueue;

@end
