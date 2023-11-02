
@interface AlgosScoreDataCSV : NSObject {
    int  _debug;
    AlgosScoreCSVReader * _rawStreamData;
    NSMutableDictionary * _statsDict;
    void * csvData;
}

@property int debug;
@property (nonatomic, retain) AlgosScoreCSVReader *rawStreamData;
@property (nonatomic, retain) NSMutableDictionary *statsDict;

- (void).cxx_destruct;
- (void)clearStreamingData;
- (void)dealloc;
- (int)debug;
- (id)init;
- (void)populateScore:(id)arg1;
- (id)rawStreamData;
- (id)readData:(id)arg1;
- (id)readData:(id)arg1 catchException:(bool)arg2;
- (id)readDirectoryAndScore:(id)arg1 score:(id)arg2 options:(id)arg3;
- (void)setDebug:(int)arg1;
- (void)setRawStreamData:(id)arg1;
- (void)setStatsDict:(id)arg1;
- (id)statsDict;
- (int)transformer;

@end
