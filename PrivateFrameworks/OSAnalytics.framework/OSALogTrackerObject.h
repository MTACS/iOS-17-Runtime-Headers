
@interface OSALogTrackerObject : NSObject {
    unsigned long long  _count;
    NSDate * _oldestDate;
    NSString * _oldestLogPath;
    NSMutableDictionary * _signatures;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, retain) NSDate *oldestDate;
@property (nonatomic, retain) NSString *oldestLogPath;
@property (readonly) NSMutableDictionary *signatures;

+ (id)sharedTrackers;
+ (id)tracker;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)description;
- (id)init;
- (id)oldestDate;
- (id)oldestLogPath;
- (void)setCount:(unsigned long long)arg1;
- (void)setOldestDate:(id)arg1;
- (void)setOldestLogPath:(id)arg1;
- (id)signatures;

@end
