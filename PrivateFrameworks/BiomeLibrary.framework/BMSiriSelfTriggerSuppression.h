
@interface BMSiriSelfTriggerSuppression : BMEventBase <BMStoreData> {
    int  _audioSource;
    double  _durationOfSelfTriggerEventInSec;
    bool  _hasDurationOfSelfTriggerEventInSec;
    bool  _hasIsBluetoothSpeakerActive;
    bool  _hasIsBuiltInSpeakerActive;
    bool  _hasNumSelfTriggersDetectedDuringEvent;
    bool  _isBluetoothSpeakerActive;
    bool  _isBuiltInSpeakerActive;
    unsigned int  _numSelfTriggersDetectedDuringEvent;
}

@property (nonatomic, readonly) int audioSource;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double durationOfSelfTriggerEventInSec;
@property (nonatomic) bool hasDurationOfSelfTriggerEventInSec;
@property (nonatomic) bool hasIsBluetoothSpeakerActive;
@property (nonatomic) bool hasIsBuiltInSpeakerActive;
@property (nonatomic) bool hasNumSelfTriggersDetectedDuringEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBluetoothSpeakerActive;
@property (nonatomic, readonly) bool isBuiltInSpeakerActive;
@property (nonatomic, readonly) unsigned int numSelfTriggersDetectedDuringEvent;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (int)audioSource;
- (unsigned int)dataVersion;
- (id)description;
- (double)durationOfSelfTriggerEventInSec;
- (bool)hasDurationOfSelfTriggerEventInSec;
- (bool)hasIsBluetoothSpeakerActive;
- (bool)hasIsBuiltInSpeakerActive;
- (bool)hasNumSelfTriggersDetectedDuringEvent;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithNumSelfTriggersDetectedDuringEvent:(id)arg1 durationOfSelfTriggerEventInSec:(id)arg2 audioSource:(int)arg3 isBluetoothSpeakerActive:(id)arg4 isBuiltInSpeakerActive:(id)arg5;
- (bool)isBluetoothSpeakerActive;
- (bool)isBuiltInSpeakerActive;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (unsigned int)numSelfTriggersDetectedDuringEvent;
- (id)serialize;
- (void)setHasDurationOfSelfTriggerEventInSec:(bool)arg1;
- (void)setHasIsBluetoothSpeakerActive:(bool)arg1;
- (void)setHasIsBuiltInSpeakerActive:(bool)arg1;
- (void)setHasNumSelfTriggersDetectedDuringEvent:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
