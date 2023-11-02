
@interface BMPBAppLaunchEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _bundleID;
    double  _duration;
    NSString * _exactVersionString;
    NSString * _extensionHostID;
    struct { 
        unsigned int absoluteTimestamp : 1; 
        unsigned int duration : 1; 
        unsigned int launchType : 1; 
        unsigned int starting : 1; 
    }  _has;
    NSString * _launchReason;
    int  _launchType;
    NSString * _parentBundleID;
    NSString * _shortVersionString;
    bool  _starting;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSString *exactVersionString;
@property (nonatomic, retain) NSString *extensionHostID;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasExactVersionString;
@property (nonatomic, readonly) bool hasExtensionHostID;
@property (nonatomic, readonly) bool hasLaunchReason;
@property (nonatomic) bool hasLaunchType;
@property (nonatomic, readonly) bool hasParentBundleID;
@property (nonatomic, readonly) bool hasShortVersionString;
@property (nonatomic) bool hasStarting;
@property (nonatomic, retain) NSString *launchReason;
@property (nonatomic) int launchType;
@property (nonatomic, retain) NSString *parentBundleID;
@property (nonatomic, retain) NSString *shortVersionString;
@property (nonatomic) bool starting;

- (void).cxx_destruct;
- (int)StringAsLaunchType:(id)arg1;
- (double)absoluteTimestamp;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (id)exactVersionString;
- (id)extensionHostID;
- (bool)hasAbsoluteTimestamp;
- (bool)hasBundleID;
- (bool)hasDuration;
- (bool)hasExactVersionString;
- (bool)hasExtensionHostID;
- (bool)hasLaunchReason;
- (bool)hasLaunchType;
- (bool)hasParentBundleID;
- (bool)hasShortVersionString;
- (bool)hasStarting;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)launchReason;
- (int)launchType;
- (id)launchTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parentBundleID;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setExactVersionString:(id)arg1;
- (void)setExtensionHostID:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasLaunchType:(bool)arg1;
- (void)setHasStarting:(bool)arg1;
- (void)setLaunchReason:(id)arg1;
- (void)setLaunchType:(int)arg1;
- (void)setParentBundleID:(id)arg1;
- (void)setShortVersionString:(id)arg1;
- (void)setStarting:(bool)arg1;
- (id)shortVersionString;
- (bool)starting;
- (void)writeTo:(id)arg1;

@end
