
@interface PFLSession : NSObject {
    <PFLDataSource> * _dataSource;
    <PFLResumable> * _underlyingTask;
}

@property (nonatomic, retain) <PFLDataSource> *dataSource;
@property (nonatomic, retain) <PFLResumable> *underlyingTask;

+ (id)sessionForTesting;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)dataSource;
- (id)init;
- (bool)registerWithSource:(id)arg1;
- (bool)resume;
- (void)setDataSource:(id)arg1;
- (void)setUnderlyingTask:(id)arg1;
- (void)suspend;
- (id)underlyingTask;
- (void)updateModel:(id)arg1 modelConfiguration:(id)arg2 layerNamesToPrivatize:(id)arg3 privatizationIdentifier:(id)arg4 privatizationNormMax:(double)arg5 privatizationNormBinCount:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;

@end
