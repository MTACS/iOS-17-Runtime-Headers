
@interface EKUndoSliceOutcome : NSObject <NSCopying> {
    EKSeriesDetails * _createdSeriesDetails;
    EKSeriesDetails * _mainSeriesDetails;
    EKEvent * _masterToDelete;
    EKPostSliceDescription * _originalPostSliceDescription;
}

@property (copy) EKSeriesDetails *createdSeriesDetails;
@property (copy) EKSeriesDetails *mainSeriesDetails;
@property (copy) EKEvent *masterToDelete;
@property (readonly) EKPostSliceDescription *originalPostSliceDescription;

- (void).cxx_destruct;
- (void)_markExistingSeriesMasterAsChangedFromMaster:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdSeriesDetails;
- (id)initResliceFromOutcome:(id)arg1;
- (id)initWithOriginalPostSliceDescription:(id)arg1;
- (id)mainSeriesDetails;
- (id)masterToDelete;
- (id)originalPostSliceDescription;
- (void)setCreatedSeriesDetails:(id)arg1;
- (void)setMainSeriesDetails:(id)arg1;
- (void)setMasterToDelete:(id)arg1;

@end
