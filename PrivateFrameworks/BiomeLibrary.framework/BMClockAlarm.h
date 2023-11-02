
@interface BMClockAlarm : BMEventBase <BMStoreData, SearchUIBiomeBoolEvent> {
    NSString * _alarmID;
    bool  _enabled;
    int  _eventType;
    bool  _hasEnabled;
    bool  _hasIsSleepAlarm;
    bool  _isSleepAlarm;
    int  _lastEventType;
}

@property (nonatomic, readonly) NSString *alarmID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) int eventType;
@property (nonatomic) bool hasEnabled;
@property (nonatomic) bool hasIsSleepAlarm;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSleepAlarm;
@property (nonatomic, readonly) int lastEventType;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)alarmID;
- (unsigned int)dataVersion;
- (id)description;
- (bool)enabled;
- (int)eventType;
- (bool)hasEnabled;
- (bool)hasIsSleepAlarm;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIsSleepAlarm:(id)arg1 eventType:(int)arg2 alarmID:(id)arg3 lastEventType:(int)arg4;
- (id)initWithIsSleepAlarm:(id)arg1 eventType:(int)arg2 alarmID:(id)arg3 lastEventType:(int)arg4 enabled:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isSleepAlarm;
- (id)jsonDictionary;
- (int)lastEventType;
- (id)serialize;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasIsSleepAlarm:(bool)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void)getEnabledStatusWithCompletion:(id /* block */)arg1;

@end
