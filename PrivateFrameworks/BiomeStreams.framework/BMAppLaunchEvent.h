
@interface BMAppLaunchEvent : BMEventBase <ATXShadowEventProtocol, ATXTimedEventProtocol, BMEventAppAssociating, BMEventBinaryStepping, BMEventTimeElapsing, BMProtoBufWrapper, BMStoreData, NSSecureCoding> {
    NSString * _exactVersionString;
    NSString * _extensionHostID;
    NSString * _launchReason;
    unsigned long long  _launchType;
    NSString * _parentBundleID;
    NSString * _shortVersionString;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *exactVersionString;
@property (nonatomic, copy) NSString *extensionHostID;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *launchReason;
@property (nonatomic) unsigned long long launchType;
@property (nonatomic, copy) NSString *parentBundleID;
@property (nonatomic, copy) NSString *shortVersionString;
@property (getter=isStarting, nonatomic) bool starting;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)exactVersionString;
- (id)extensionHostID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithStarting:(bool)arg1 bundleID:(id)arg2 absoluteTimeStamp:(double)arg3 duration:(double)arg4 launchReason:(id)arg5 launchType:(unsigned long long)arg6 parentBundleID:(id)arg7 extensionHostID:(id)arg8;
- (id)initWithStarting:(bool)arg1 bundleID:(id)arg2 absoluteTimeStamp:(double)arg3 duration:(double)arg4 launchReason:(id)arg5 launchType:(unsigned long long)arg6 parentBundleID:(id)arg7 extensionHostID:(id)arg8 shortVersionString:(id)arg9 exactBundleVersion:(id)arg10;
- (id)initWithStarting:(bool)arg1 bundleID:(id)arg2 absoluteTimeStamp:(double)arg3 launchReason:(id)arg4 launchType:(unsigned long long)arg5 parentBundleID:(id)arg6 extensionHostID:(id)arg7;
- (id)initWithStarting:(bool)arg1 bundleID:(id)arg2 absoluteTimeStamp:(double)arg3 launchReason:(id)arg4 launchType:(unsigned long long)arg5 parentBundleID:(id)arg6 extensionHostID:(id)arg7 shortVersionString:(id)arg8 exactBundleVersion:(id)arg9;
- (id)initWithStarting:(bool)arg1 bundleId:(id)arg2 absoluteTimeStamp:(double)arg3 launchReason:(id)arg4 launchType:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)launchReason;
- (unsigned long long)launchType;
- (id)parentBundleID;
- (id)proto;
- (id)serialize;
- (void)setExactVersionString:(id)arg1;
- (void)setExtensionHostID:(id)arg1;
- (void)setLaunchReason:(id)arg1;
- (void)setLaunchType:(unsigned long long)arg1;
- (void)setParentBundleID:(id)arg1;
- (void)setShortVersionString:(id)arg1;
- (id)shortVersionString;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (id)date;
- (id)eventTime;

@end
