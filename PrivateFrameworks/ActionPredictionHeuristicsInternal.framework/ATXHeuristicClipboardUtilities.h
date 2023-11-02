
@interface ATXHeuristicClipboardUtilities : NSObject {
    NSString * _appName;
    NSString * _content;
    NSArray * _dataDetectors;
    ATXHeuristicDevice * _heuristicDevice;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSString *content;
@property (nonatomic, retain) NSArray *dataDetectors;

- (void).cxx_destruct;
- (id)_appNameFromBundleID:(id)arg1;
- (id)_dataDetectorsWithContent:(id)arg1;
- (void)_resetContents;
- (id)appName;
- (id)content;
- (id)dataDetectors;
- (void)fetchContents;
- (id)initWithDevice:(id)arg1;
- (id)resultWithActions:(id)arg1 predictionReasons:(unsigned long long)arg2;
- (void)setAppName:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDataDetectors:(id)arg1;

@end
