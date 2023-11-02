
@interface HDHealthAppSharingEntryObserver : NSObject <HDSummarySharingEntryManagerDelegate> {
    HDHAHealthPluginHostFeedGenerator * _feedGenerator;
    HDSummarySharingEntryManager * _sharingEntryManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HDHAHealthPluginHostFeedGenerator *feedGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDSummarySharingEntryManager *sharingEntryManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)feedGenerator;
- (id)initWithProfile:(id)arg1;
- (void)setFeedGenerator:(id)arg1;
- (void)setSharingEntryManager:(id)arg1;
- (id)sharingEntryManager;
- (void)sharingEntryManager:(id)arg1 didJournalEntries:(id)arg2;

@end
