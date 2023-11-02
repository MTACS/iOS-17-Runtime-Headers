
@interface PKStatisticsManager : NSObject {
    <PKDrawingPaletteStatistics> * _drawingPaletteStatistics;
    double  _latestShapeCreatedTimestamp;
    double  _latestTextLinesStraightenedTimestamp;
    NSString * _recentShapeCreated;
    NSDictionary * _recentTextLinesStraightened;
}

- (void).cxx_destruct;

@end
