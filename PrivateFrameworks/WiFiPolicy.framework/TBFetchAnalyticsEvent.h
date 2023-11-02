
@interface TBFetchAnalyticsEvent : NSObject <TBAnalyticsEvent> {
    NSDate * _date;
    NSNumber * _duration;
    NSError * _error;
    NSNumber * _requestCount;
    NSNumber * _resultCount;
    unsigned long long  _source;
    NSString * _tileKey;
    unsigned long long  _trigger;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSDictionary *eventDictionary;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *requestCount;
@property (nonatomic, retain) NSNumber *resultCount;
@property (nonatomic) unsigned long long source;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *tileKey;
@property (nonatomic) unsigned long long trigger;
@property (nonatomic) unsigned long long type;

+ (id)fetchEventWithSource:(unsigned long long)arg1 type:(unsigned long long)arg2 trigger:(unsigned long long)arg3 duration:(id)arg4 requestCount:(id)arg5 resultCount:(id)arg6 error:(id)arg7 tileKey:(id)arg8;

- (void).cxx_destruct;
- (id)date;
- (id)duration;
- (id)error;
- (id)eventDictionary;
- (id)eventName;
- (id)requestCount;
- (id)resultCount;
- (void)setDate:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRequestCount:(id)arg1;
- (void)setResultCount:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setTileKey:(id)arg1;
- (void)setTrigger:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)source;
- (id)tileKey;
- (unsigned long long)trigger;
- (unsigned long long)type;

@end
