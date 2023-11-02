
@interface _HDWorkoutCondensationConfiguration : NSObject {
    _HDWorkoutCondenserAnalyticsAccumulator * _analyticsAccumulator;
    long long  _deletedSampleThreshold;
    long long  _maximumSeriesSize;
    long long  _minimumSeriesSize;
    double  _minimumWorkoutDuration;
    HDSQLitePredicate * _predicate;
    HDProfile * _profile;
}

- (void).cxx_destruct;

@end
