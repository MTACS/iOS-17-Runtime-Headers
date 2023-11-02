
@interface MTEventHandler : MTEventDataProvider {
    NSArray * _postProcessingBlocks;
    NSArray * _registeredEventData;
    NSString * _registeredName;
}

@property (nonatomic) <MTEventHandlerDelegate> *delegate;
@property (retain) NSArray *postProcessingBlocks;
@property (nonatomic, retain) NSArray *registeredEventData;
@property (nonatomic, retain) NSString *registeredName;

+ (id)cachableWithKey:(id)arg1 onBackgroundThread:(bool)arg2 block:(id /* block */)arg3;
+ (void)clearEventContextCache;
+ (void)createEventContextCache;
+ (id)currentEventContextCache;

- (void).cxx_destruct;
- (void)addPostProcessingBlock:(id /* block */)arg1;
- (void)didCreateMetricsData:(id)arg1;
- (id)eventType;
- (id)eventVersion:(id)arg1;
- (id)knownFields;
- (id)metricsDataWithCallerSuppliedFields:(id)arg1;
- (id)metricsDataWithEventData:(id)arg1;
- (id)metricsDataWithFields:(id)arg1;
- (bool)mtIncludeBaseFields;
- (id)postProcessingBlocks;
- (id)registeredEventData;
- (id)registeredName;
- (void)setPostProcessingBlocks:(id)arg1;
- (void)setRegisteredEventData:(id)arg1;
- (void)setRegisteredName:(id)arg1;

@end
