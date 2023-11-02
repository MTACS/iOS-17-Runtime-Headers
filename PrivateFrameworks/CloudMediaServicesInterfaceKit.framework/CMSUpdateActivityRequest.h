
@interface CMSUpdateActivityRequest : NSObject <CMSCoding> {
    NSDictionary * _constraints;
    CMSContentFailure * _contentFailure;
    CMSPlayerContext * _nowPlaying;
    CMSPlayerContext * _previouslyPlaying;
    unsigned long long  _report;
    NSString * _sessionIdentifier;
    NSDate * _timestamp;
    NSDictionary * _userActivityDictionary;
}

@property (nonatomic, retain) NSDictionary *constraints;
@property (nonatomic, retain) CMSContentFailure *contentFailure;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CMSPlayerContext *nowPlaying;
@property (nonatomic, retain) CMSPlayerContext *previouslyPlaying;
@property (nonatomic) unsigned long long report;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NSDictionary *userActivityDictionary;

- (void).cxx_destruct;
- (id)cmsCoded;
- (id)constraints;
- (id)contentFailure;
- (id)description;
- (id)initForActivity:(id)arg1 failure:(id)arg2 whilePlaying:(id)arg3;
- (id)initForActivity:(id)arg1 report:(unsigned long long)arg2 nowPlaying:(id)arg3 previouslyPlaying:(id)arg4;
- (id)nowPlaying;
- (id)previouslyPlaying;
- (unsigned long long)report;
- (id)sessionIdentifier;
- (void)setConstraints:(id)arg1;
- (void)setContentFailure:(id)arg1;
- (void)setNowPlaying:(id)arg1;
- (void)setPreviouslyPlaying:(id)arg1;
- (void)setReport:(unsigned long long)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUserActivityDictionary:(id)arg1;
- (id)timestamp;
- (id)userActivityDictionary;

@end
