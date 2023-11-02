
@interface _HKGraphSeriesZoomLevelConfigurationManager : NSObject {
    NSMutableDictionary * _displayTypeIdentifierToConfiguration;
    NSMutableArray * _graphSeriesInOrderAdded;
    NSMutableDictionary * _graphSeriesUUIDToConfiguration;
}

@property (nonatomic, retain) NSMutableDictionary *displayTypeIdentifierToConfiguration;
@property (nonatomic, retain) NSMutableArray *graphSeriesInOrderAdded;
@property (nonatomic, retain) NSMutableDictionary *graphSeriesUUIDToConfiguration;

- (void).cxx_destruct;
- (id)_displayTypeIdentifierForDisplayType:(id)arg1;
- (void)addConfiguration:(id)arg1;
- (id)allDisplayTypes;
- (id)allGraphSeries;
- (id)configurationForDisplayType:(id)arg1;
- (id)configurationForGraphSeries:(id)arg1;
- (id)displayTypeIdentifierToConfiguration;
- (id)graphSeriesInOrderAdded;
- (id)graphSeriesUUIDToConfiguration;
- (id)init;
- (void)removeConfigurationForDisplayType:(id)arg1;
- (void)reset;
- (void)setDisplayTypeIdentifierToConfiguration:(id)arg1;
- (void)setGraphSeriesInOrderAdded:(id)arg1;
- (void)setGraphSeriesUUIDToConfiguration:(id)arg1;

@end
