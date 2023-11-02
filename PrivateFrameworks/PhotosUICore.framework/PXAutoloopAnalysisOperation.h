
@interface PXAutoloopAnalysisOperation : NSOperation {
    NSDictionary * _analysisResult;
    NSNumber * _duration;
    PLLivePhotoEditSource * _editSource;
    NSError * _error;
    NSProgress * _progress;
    NSDictionary * _recipesByVariationType;
    bool  _succeeded;
}

@property (nonatomic, readonly) NSDictionary *analysisResult;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) PLLivePhotoEditSource *editSource;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) bool succeeded;

- (void).cxx_destruct;
- (void)_timeout;
- (id)analysisResult;
- (void)cancel;
- (id)duration;
- (id)editSource;
- (id)error;
- (id)init;
- (id)initWithEditSource:(id)arg1;
- (void)main;
- (id)progress;
- (id)recipeForVariationType:(long long)arg1;
- (bool)succeeded;

@end
