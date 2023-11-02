
@interface TBCacheAnalyticsEvent : NSObject <TBAnalyticsEvent> {
    NSNumber * _errorCode;
    NSDictionary * _eventDictionary;
    NSString * _eventName;
    NSNumber * _staleness;
    unsigned long long  _status;
    NSNumber * _tileKey;
    NSNumber * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSNumber *errorCode;
@property (nonatomic, retain) NSDictionary *eventDictionary;
@property (nonatomic, retain) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSNumber *staleness;
@property (nonatomic) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic) NSNumber *tileKey;
@property (nonatomic) NSNumber *type;

+ (id)cacheAnalyticsEventWithStatus:(unsigned long long)arg1 staleness:(unsigned long long)arg2 tileKey:(unsigned long long)arg3 type:(unsigned long long)arg4 error:(id)arg5;
+ (id)cacheAvailabilityEventWithStatus:(unsigned long long)arg1;
+ (id)cacheEventWithTotalCount:(unsigned long long)arg1 last24HoursCount:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)errorCode;
- (id)eventDictionary;
- (id)eventName;
- (void)setErrorCode:(id)arg1;
- (void)setEventDictionary:(id)arg1;
- (void)setEventName:(id)arg1;
- (void)setStaleness:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTileKey:(id)arg1;
- (void)setType:(id)arg1;
- (id)staleness;
- (unsigned long long)status;
- (id)tileKey;
- (id)type;

@end
