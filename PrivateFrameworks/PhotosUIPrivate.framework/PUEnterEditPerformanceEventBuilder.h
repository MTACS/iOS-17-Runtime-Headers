
@interface PUEnterEditPerformanceEventBuilder : NSObject {
    <PUEditableAsset> * _asset;
    double  _autoCalcDuration;
    bool  _editingWithRaw;
    double  _enterEditDuration;
    bool  _firstSinceBoot;
    bool  _firstSinceLaunch;
    double  _resourceCheckingDuration;
    double  _resourceDownloadDuration;
    double  _resourceLoadingDuration;
}

@property (nonatomic, retain) <PUEditableAsset> *asset;
@property (nonatomic) double autoCalcDuration;
@property (getter=isEditingWithRaw, nonatomic) bool editingWithRaw;
@property (nonatomic) double enterEditDuration;
@property (getter=isFirstSinceBoot, nonatomic) bool firstSinceBoot;
@property (getter=isFirstSinceLaunch, nonatomic) bool firstSinceLaunch;
@property (nonatomic) double resourceCheckingDuration;
@property (nonatomic) double resourceDownloadDuration;
@property (nonatomic) double resourceLoadingDuration;

- (void).cxx_destruct;
- (id)asset;
- (double)autoCalcDuration;
- (id)buildEvent;
- (double)enterEditDuration;
- (bool)isEditingWithRaw;
- (bool)isFirstSinceBoot;
- (bool)isFirstSinceLaunch;
- (double)resourceCheckingDuration;
- (double)resourceDownloadDuration;
- (double)resourceLoadingDuration;
- (void)setAsset:(id)arg1;
- (void)setAutoCalcDuration:(double)arg1;
- (void)setEditingWithRaw:(bool)arg1;
- (void)setEnterEditDuration:(double)arg1;
- (void)setFirstSinceBoot:(bool)arg1;
- (void)setFirstSinceLaunch:(bool)arg1;
- (void)setResourceCheckingDuration:(double)arg1;
- (void)setResourceDownloadDuration:(double)arg1;
- (void)setResourceLoadingDuration:(double)arg1;

@end
