
@interface CACVoiceOverAnnouncer : NSObject {
    NSObject<OS_dispatch_queue> * _announcerQueue;
    CACVoiceOverAnnouncement * _currentAnnouncement;
    bool  _shouldInterruptCurrentAnnouncement;
    NSMutableArray * _voiceOverAnnouncementQueue;
}

@property (nonatomic, retain) CACVoiceOverAnnouncement *currentAnnouncement;
@property (nonatomic) bool shouldInterruptCurrentAnnouncement;
@property (nonatomic, retain) NSMutableArray *voiceOverAnnouncementQueue;

- (void).cxx_destruct;
- (void)_dequeueNextAnnouncement;
- (void)_didFinishAnnouncement:(id)arg1;
- (void)announceMessage:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (id)currentAnnouncement;
- (id)init;
- (void)prepareForImmediateAnnouncement;
- (void)setCurrentAnnouncement:(id)arg1;
- (void)setShouldInterruptCurrentAnnouncement:(bool)arg1;
- (void)setVoiceOverAnnouncementQueue:(id)arg1;
- (bool)shouldInterruptCurrentAnnouncement;
- (id)voiceOverAnnouncementQueue;

@end
