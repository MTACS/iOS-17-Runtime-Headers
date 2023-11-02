
@interface EKPostSliceDescription : EKSliceDescription {
    EKSeriesDetails * _createdSeriesDetails;
    EKSeriesDetails * _updatedMainSeriesDetails;
}

@property (copy) EKSeriesDetails *createdSeriesDetails;
@property (copy) EKSeriesDetails *updatedMainSeriesDetails;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdSeriesDetails;
- (id)description;
- (id)initWithOriginalSliceDescription:(id)arg1;
- (void)setCreatedSeriesDetails:(id)arg1;
- (void)setUpdatedMainSeriesDetails:(id)arg1;
- (id)updatedMainSeriesDetails;

@end
