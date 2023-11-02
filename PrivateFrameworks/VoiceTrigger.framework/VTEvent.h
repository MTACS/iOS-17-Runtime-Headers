
@interface VTEvent : NSObject {
    NSURL * _jsonFileUrl;
    NSDictionary * _voiceTriggerEventInfo;
}

@property (nonatomic, readonly) NSURL *jsonFileUrl;
@property (nonatomic, readonly) NSDictionary *voiceTriggerEventInfo;

+ (id)eventFromURL:(id)arg1;
+ (long long)eventTypeFromURL:(id)arg1;

- (void).cxx_destruct;
- (id)_buildContent;
- (id)_buildDetail;
- (id)_buildTitle;
- (id)_buildTriggerContent;
- (id)_buildTriggerDetail;
- (id)_getFloatStringFromVTEventWithKey:(id)arg1 decimal:(bool)arg2;
- (id)_packAudioContent:(id)arg1 filepath:(id)arg2;
- (id)_packAudioURLFromVTEventInfo:(id)arg1 key:(id)arg2;
- (id)_packBooleanFromVTEventInfo:(id)arg1 key:(id)arg2;
- (id)_packStringContent:(id)arg1 value:(id)arg2;
- (id)_packStringFromVTEventInfo:(id)arg1 key:(id)arg2;
- (void)_readJsonFile:(id)arg1;
- (id)eventTrackerDictionary;
- (id)initWithEventLogURL:(id)arg1;
- (id)jsonFileName;
- (id)jsonFileUrl;
- (id)timestampString;
- (id)voiceTriggerEventInfo;

@end
