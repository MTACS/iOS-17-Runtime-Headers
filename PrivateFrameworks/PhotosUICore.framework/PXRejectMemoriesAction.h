
@interface PXRejectMemoriesAction : PXMemoriesAction {
    unsigned long long  _featureType;
    NSDictionary * _redoMemoryFeatures;
    NSDictionary * _redoPhotosGraphDataValues;
    NSDictionary * _redoUserFeedbacks;
    unsigned long long  _rejectReason;
    NSDictionary * _undoPhotosGraphDataValues;
    NSDictionary * _undoUserFeedbacks;
}

@property (nonatomic) unsigned long long featureType;
@property (nonatomic, copy) NSDictionary *redoMemoryFeatures;
@property (nonatomic, copy) NSDictionary *redoPhotosGraphDataValues;
@property (nonatomic, copy) NSDictionary *redoUserFeedbacks;
@property (nonatomic) unsigned long long rejectReason;
@property (nonatomic, copy) NSDictionary *undoPhotosGraphDataValues;
@property (nonatomic, copy) NSDictionary *undoUserFeedbacks;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionSystemImageName;
- (unsigned long long)featureType;
- (id)localizedActionName;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)redoMemoryFeatures;
- (id)redoPhotosGraphDataValues;
- (id)redoUserFeedbacks;
- (unsigned long long)rejectReason;
- (void)setFeatureType:(unsigned long long)arg1;
- (void)setRedoMemoryFeatures:(id)arg1;
- (void)setRedoPhotosGraphDataValues:(id)arg1;
- (void)setRedoUserFeedbacks:(id)arg1;
- (void)setRejectReason:(unsigned long long)arg1;
- (void)setUndoPhotosGraphDataValues:(id)arg1;
- (void)setUndoUserFeedbacks:(id)arg1;
- (id)undoPhotosGraphDataValues;
- (id)undoUserFeedbacks;

@end
