
@interface BMInferredModeEvent : NSObject <BMProtoBufWrapper, BMStoreData> {
    double  _absoluteTimestamp;
    double  _confidenceScore;
    bool  _isAutomationEnabled;
    bool  _isStart;
    unsigned long long  _modeType;
    NSString * _modeUUID;
    long long  _origin;
    NSString * _originAnchorType;
    NSString * _originBundleId;
    NSArray * _serializedTriggers;
    bool  _shouldSuggestTriggers;
    NSString * _suggestionUUID;
    unsigned long long  _uiLocation;
    NSString * _userModeName;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) double confidenceScore;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAutomationEnabled;
@property (nonatomic, readonly) bool isStart;
@property (nonatomic, readonly) NSString *modeIdentifier;
@property (nonatomic, readonly) unsigned long long modeType;
@property (nonatomic, readonly) NSString *modeUUID;
@property (nonatomic, readonly) long long origin;
@property (nonatomic, readonly) NSString *originAnchorType;
@property (nonatomic, readonly) NSString *originBundleId;
@property (nonatomic, readonly) NSArray *serializedTriggers;
@property (nonatomic, readonly) bool shouldSuggestTriggers;
@property (nonatomic, readonly) NSString *suggestionUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long uiLocation;
@property (nonatomic, readonly) NSString *userModeName;
@property (nonatomic, readonly) NSString *uuid;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (double)confidenceScore;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)initWithAbsoluteTimestamp:(double)arg1 modeIdentifier:(id)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 isAutomationEnabled:(bool)arg6 uiLocation:(unsigned long long)arg7 isStart:(bool)arg8 confidenceScore:(double)arg9 uuid:(id)arg10 serializedTriggers:(id)arg11;
- (id)initWithAbsoluteTimestamp:(double)arg1 modeIdentifier:(id)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 isAutomationEnabled:(bool)arg6 uiLocation:(unsigned long long)arg7 isStart:(bool)arg8 confidenceScore:(double)arg9 uuid:(id)arg10 serializedTriggers:(id)arg11 modeType:(unsigned long long)arg12;
- (id)initWithAbsoluteTimestamp:(double)arg1 modeUUID:(id)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 isAutomationEnabled:(bool)arg6 uiLocation:(unsigned long long)arg7 isStart:(bool)arg8 confidenceScore:(double)arg9 suggestionUUID:(id)arg10 serializedTriggers:(id)arg11 modeType:(unsigned long long)arg12;
- (id)initWithAbsoluteTimestamp:(double)arg1 modeUUID:(id)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 isAutomationEnabled:(bool)arg6 uiLocation:(unsigned long long)arg7 isStart:(bool)arg8 confidenceScore:(double)arg9 suggestionUUID:(id)arg10 serializedTriggers:(id)arg11 shouldSuggestTriggers:(bool)arg12 modeType:(unsigned long long)arg13;
- (id)initWithAbsoluteTimestamp:(double)arg1 modeUUID:(id)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 isAutomationEnabled:(bool)arg6 uiLocation:(unsigned long long)arg7 isStart:(bool)arg8 confidenceScore:(double)arg9 suggestionUUID:(id)arg10 serializedTriggers:(id)arg11 shouldSuggestTriggers:(bool)arg12 modeType:(unsigned long long)arg13 userModeName:(id)arg14;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isAutomationEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isStart;
- (id)json;
- (id)jsonDict;
- (id)modeIdentifier;
- (unsigned long long)modeType;
- (id)modeUUID;
- (long long)origin;
- (id)originAnchorType;
- (id)originBundleId;
- (id)proto;
- (id)serialize;
- (id)serializedTriggers;
- (bool)shouldSuggestTriggers;
- (id)suggestionUUID;
- (unsigned long long)uiLocation;
- (id)userModeName;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient

- (id)description;

@end
