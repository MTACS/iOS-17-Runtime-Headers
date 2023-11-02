
@interface _CDEventStreams : NSObject {
    NSDictionary * _allEventStreams;
    NSDictionary * _allKBEventStreams;
    bool  _allStreamsLoaded;
}

@property (nonatomic, readonly) NSDictionary *allEventStreams;
@property (nonatomic, readonly) NSDictionary *allKBEventStreams;
@property (nonatomic) bool allStreamsLoaded;

+ (id)ephemeralitySchedule;
+ (id)eventStreamForName:(id)arg1;
+ (id)eventStreamPropertiesForEventStream:(id)arg1;
+ (id)eventStreamPropertiesForKBName:(id)arg1;
+ (id)eventStreamPropertiesForName:(id)arg1;
+ (void)loadAllEventStreams;
+ (id)privacyPolicyForEventStreamName:(id)arg1;
+ (id)rateLimiterForEventStreamName:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_eventStreamForName:(id)arg1 orKBName:(id)arg2;
- (id)allEventStreams;
- (id)allKBEventStreams;
- (bool)allStreamsLoaded;
- (id)init;
- (void)setAllEventStreams:(id)arg1;
- (void)setAllKBEventStreams:(id)arg1;
- (void)setAllStreamsLoaded:(bool)arg1;

@end
