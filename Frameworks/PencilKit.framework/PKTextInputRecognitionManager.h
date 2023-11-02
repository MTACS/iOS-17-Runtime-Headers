
@interface PKTextInputRecognitionManager : NSObject <CHQueryDelegate, CHRecognitionSessionDataSource, CHTextInputQueryTargetDataSource, PKTextInputDebugStateReporting> {
    double  __beganRecognitionTimestamp;
    double  __lastRecognitionDuration;
    CHRecognitionSession * __recognitionSession;
    CHTextInputQuery * __textInputQuery;
    <PKTextInputRecognitionManagerDataSource> * _currentDataSource;
    bool  _preferOutOfProcessRecognition;
    NSArray * _recognitionLocales;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *textInputTargets;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchContentInfoForTextInputTarget:(id)arg1 strokeIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)queryDidUpdateResult:(id)arg1;
- (void)reportDebugStateDescription:(id /* block */)arg1;
- (id)strokeProviderSnapshot;
- (id)textInputTargetForItemStableIdentifier:(id)arg1 strokeIdentifiers:(id)arg2;
- (id)textInputTargetForItemStableIdentifier:(id)arg1 strokeIdentifiers:(id)arg2 simultaneousItemStableIdentifiers:(id)arg3;
- (id)textInputTargets;

@end
