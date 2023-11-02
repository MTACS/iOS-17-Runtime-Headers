
@interface ATXModeGymFeaturizer : NSObject <ATXModeFeaturizer> {
    ATXPOICategoryVisitDataProvider * _dataProvider;
    <ATXModeFeaturizerDelegate> * _delegate;
}

@property (nonatomic, retain) ATXPOICategoryVisitDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXModeFeaturizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginListening;
- (id)dataProvider;
- (id)delegate;
- (void)handleChange;
- (id)init;
- (id)provideFeatures;
- (void)setDataProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopListening;

@end
