
@interface SAHomeCommunicationAnnouncement : SADomainObject <SABackgroundContextObject>

@property (nonatomic, copy) NSDate *datePlaybackFinished;
@property (nonatomic, copy) NSDate *datePlaybackStarted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)datePlaybackFinished;
- (id)datePlaybackStarted;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDatePlaybackFinished:(id)arg1;
- (void)setDatePlaybackStarted:(id)arg1;

@end
