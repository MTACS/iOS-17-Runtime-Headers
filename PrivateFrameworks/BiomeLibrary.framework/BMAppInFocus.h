
@interface BMAppInFocus : BMEventBase <BMStoreData> {
    NSString * _bundleID;
    double  _duration;
    unsigned int  _dyldPlatform;
    NSString * _exactVersionString;
    NSString * _extensionHostID;
    bool  _hasDuration;
    bool  _hasDyldPlatform;
    bool  _hasIsNativeArchitecture;
    bool  _hasRaw_absoluteTimestamp;
    bool  _hasStarting;
    bool  _isNativeArchitecture;
    NSString * _launchReason;
    NSString * _parentBundleID;
    double  _raw_absoluteTimestamp;
    NSString * _shortVersionString;
    bool  _starting;
    int  _type;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned int dyldPlatform;
@property (nonatomic, readonly) NSString *exactVersionString;
@property (nonatomic, readonly) NSString *extensionHostID;
@property (nonatomic, readonly) bool hasDuration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasDyldPlatform;
@property (nonatomic) bool hasIsNativeArchitecture;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isNativeArchitecture;
@property (nonatomic, readonly) NSString *launchReason;
@property (nonatomic, readonly) int launchType;
@property (nonatomic, readonly) NSString *parentBundleID;
@property (nonatomic, readonly) NSString *shortVersionString;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)description;
- (double)duration;
- (double)duration;
- (unsigned int)dyldPlatform;
- (id)exactVersionString;
- (id)extensionHostID;
- (bool)hasDuration;
- (bool)hasDuration;
- (bool)hasDyldPlatform;
- (bool)hasIsNativeArchitecture;
- (bool)hasStarting;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithLaunchReason:(id)arg1 launchType:(int)arg2 starting:(id)arg3 absoluteTimestamp:(id)arg4 duration:(id)arg5 bundleID:(id)arg6 parentBundleID:(id)arg7 extensionHostID:(id)arg8 shortVersionString:(id)arg9 exactVersionString:(id)arg10;
- (id)initWithLaunchReason:(id)arg1 launchType:(int)arg2 starting:(id)arg3 absoluteTimestamp:(id)arg4 duration:(id)arg5 bundleID:(id)arg6 parentBundleID:(id)arg7 extensionHostID:(id)arg8 shortVersionString:(id)arg9 exactVersionString:(id)arg10 dyldPlatform:(id)arg11 isNativeArchitecture:(id)arg12;
- (id)initWithLaunchReason:(id)arg1 type:(int)arg2 starting:(id)arg3 absoluteTimestamp:(id)arg4 bundleID:(id)arg5 parentBundleID:(id)arg6 extensionHostID:(id)arg7 shortVersionString:(id)arg8 exactVersionString:(id)arg9 dyldPlatform:(id)arg10 isNativeArchitecture:(id)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isNativeArchitecture;
- (id)jsonDictionary;
- (id)launchReason;
- (int)launchType;
- (id)parentBundleID;
- (id)serialize;
- (void)setHasDuration:(bool)arg1;
- (void)setHasDyldPlatform:(bool)arg1;
- (void)setHasIsNativeArchitecture:(bool)arg1;
- (void)setHasStarting:(bool)arg1;
- (id)shortVersionString;
- (bool)starting;
- (int)type;
- (void)writeTo:(id)arg1;

@end
