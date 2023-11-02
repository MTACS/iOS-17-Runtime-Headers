
@interface _LTAnalyticsEvent : NSObject {
    double  _endTime;
    NSString * _eventName;
    NSMutableDictionary * _fields;
    NSObject<OS_dispatch_queue> * _queue;
    NSLocale * _sourceLocale;
    double  _startTime;
    NSLocale * _targetLocale;
}

@property (nonatomic, copy) NSLocale *sourceLocale;
@property (nonatomic, copy) NSLocale *targetLocale;

+ (id)timedEventWithName:(id)arg1;

- (void).cxx_destruct;
- (void)addFieldsFromDictionary:(id)arg1;
- (void)addFieldsFromDictionary:(id)arg1 internalOnly:(bool)arg2;
- (void)addFieldsWithError:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)markEnd;
- (void)markStart;
- (void)sendLazy;
- (void)setSourceLocale:(id)arg1;
- (void)setTargetLocale:(id)arg1;
- (id)sourceLocale;
- (id)targetLocale;
- (void)timestampWithName:(id)arg1;

@end
