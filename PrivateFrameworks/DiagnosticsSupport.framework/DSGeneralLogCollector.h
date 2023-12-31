
@interface DSGeneralLogCollector : NSObject {
    NSDictionary * _friendlyAppNamesDictionary;
    NSArray * _logFiles;
    NSArray * _logIDs;
}

@property (nonatomic, retain) NSDictionary *friendlyAppNamesDictionary;
@property (nonatomic, retain) NSArray *logFiles;
@property (nonatomic, retain) NSArray *logIDs;

+ (id)latestRootLog;
+ (id)latestUserLog;

- (void).cxx_destruct;
- (void)enumerateLogLinesWithBlock:(id /* block */)arg1;
- (id)friendlyAppNamesDictionary;
- (void)getLogFiles;
- (id)initWithLogIDs:(id)arg1;
- (id)logFiles;
- (id)logFilesFromEnumerator:(id)arg1;
- (id)logIDs;
- (void)setFriendlyAppNamesDictionary:(id)arg1;
- (void)setLogFiles:(id)arg1;
- (void)setLogIDs:(id)arg1;

@end
