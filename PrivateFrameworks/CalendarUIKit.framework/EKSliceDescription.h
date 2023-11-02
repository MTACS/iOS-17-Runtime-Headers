
@interface EKSliceDescription : NSObject <NSCopying> {
    EKEvent * _originalEventToSliceOn;
    EKSeriesDetails * _originalMainSeriesDetails;
}

@property (retain) EKEvent *originalEventToSliceOn;
@property (retain) EKSeriesDetails *originalMainSeriesDetails;

+ (id)sliceDescriptionForSlicingEvent:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)originalEventToSliceOn;
- (id)originalMainSeriesDetails;
- (void)setOriginalEventToSliceOn:(id)arg1;
- (void)setOriginalMainSeriesDetails:(id)arg1;

@end
