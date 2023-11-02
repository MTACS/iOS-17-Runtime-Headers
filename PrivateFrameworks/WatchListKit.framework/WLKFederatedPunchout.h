
@interface WLKFederatedPunchout : NSObject <NSSecureCoding> {
    NSString * _appAdamID;
    NSString * _bundleID;
    NSString * _canonicalID;
    NSString * _channelID;
    bool  _consented;
    NSString * _externalContentID;
    NSDate * _punchoutTime;
    unsigned long long  _resumeTimeSeconds;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *appAdamID;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *canonicalID;
@property (nonatomic, retain) NSString *channelID;
@property (getter=isConsented, nonatomic) bool consented;
@property (nonatomic, retain) NSString *externalContentID;
@property (nonatomic, retain) NSDate *punchoutTime;
@property (nonatomic) unsigned long long resumeTimeSeconds;
@property (nonatomic, retain) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appAdamID;
- (id)bundleID;
- (id)canonicalID;
- (id)channelID;
- (void)encodeWithCoder:(id)arg1;
- (id)externalContentID;
- (id)initWithCoder:(id)arg1;
- (bool)isConsented;
- (id)punchoutTime;
- (unsigned long long)resumeTimeSeconds;
- (void)setAppAdamID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCanonicalID:(id)arg1;
- (void)setChannelID:(id)arg1;
- (void)setConsented:(bool)arg1;
- (void)setExternalContentID:(id)arg1;
- (void)setPunchoutTime:(id)arg1;
- (void)setResumeTimeSeconds:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
