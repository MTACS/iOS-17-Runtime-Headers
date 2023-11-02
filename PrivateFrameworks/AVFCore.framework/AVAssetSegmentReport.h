
@interface AVAssetSegmentReport : NSObject {
    long long  _segmentType;
    NSMutableArray * _trackReports;
}

@property (nonatomic, readonly) long long segmentType;
@property (nonatomic, readonly) NSArray *trackReports;

- (void)dealloc;
- (id)initWithFigSegmentReportDictionary:(id)arg1;
- (long long)segmentType;
- (id)trackReports;

@end
