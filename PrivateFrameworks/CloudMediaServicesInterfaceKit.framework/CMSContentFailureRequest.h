
@interface CMSContentFailureRequest : NSObject <CMSCoding> {
    NSDictionary * _constraints;
    CMSContentFailure * _contentFailure;
    NSURL * _nextContentURL;
    NSURL * _previousContentURL;
    NSString * _sessionIdentifier;
    NSDate * _timestamp;
    NSDictionary * _userActivityDictionary;
    CMSPlayerContext * _whilePlaying;
}

@property (nonatomic, retain) NSDictionary *constraints;
@property (nonatomic, retain) CMSContentFailure *contentFailure;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *nextContentURL;
@property (nonatomic, retain) NSURL *previousContentURL;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NSDictionary *userActivityDictionary;
@property (nonatomic, retain) CMSPlayerContext *whilePlaying;

- (void).cxx_destruct;
- (id)cmsCoded;
- (id)constraints;
- (id)contentFailure;
- (id)description;
- (id)initWithContentFailure:(id)arg1 whilePlaying:(id)arg2 previousContentURL:(id)arg3 nextContentURL:(id)arg4 userActivityDictionary:(id)arg5;
- (id)nextContentURL;
- (id)previousContentURL;
- (id)sessionIdentifier;
- (void)setConstraints:(id)arg1;
- (void)setContentFailure:(id)arg1;
- (void)setNextContentURL:(id)arg1;
- (void)setPreviousContentURL:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUserActivityDictionary:(id)arg1;
- (void)setWhilePlaying:(id)arg1;
- (id)timestamp;
- (id)userActivityDictionary;
- (id)whilePlaying;

@end
