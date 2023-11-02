
@interface WFScanMetricsManager : NSObject {
    NSMutableDictionary * _sectionCounts;
    bool  _submited;
    NSDate * _timestamp;
}

@property (nonatomic, retain) NSMutableDictionary *sectionCounts;
@property (nonatomic) bool submited;
@property (nonatomic, retain) NSDate *timestamp;

- (void).cxx_destruct;
- (void)ingestScanResults:(id)arg1;
- (id)init;
- (void)reset;
- (id)sectionCounts;
- (id)sectionNameForRecord:(id)arg1;
- (void)setSectionCounts:(id)arg1;
- (void)setSubmited:(bool)arg1;
- (void)setTimestamp:(id)arg1;
- (void)submit;
- (bool)submited;
- (id)timestamp;

@end
