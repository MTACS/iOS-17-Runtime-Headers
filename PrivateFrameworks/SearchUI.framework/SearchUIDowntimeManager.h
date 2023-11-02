
@interface SearchUIDowntimeManager : NSObject {
    BPSSink * _biomeSink;
    NSCache * _downtimeStatuses;
    NSNotificationCenter * _notificationCenter;
}

@property (retain) BPSSink *biomeSink;
@property (readonly) NSCache *downtimeStatuses;
@property (nonatomic, retain) NSNotificationCenter *notificationCenter;

+ (id)familyMemberForContact:(id)arg1 isMe:(bool)arg2;
+ (bool)isChildOrTeenFamilyMember:(id)arg1;
+ (bool)screenTimeIsEnabledForContact:(id)arg1;
+ (id)screenTimeUserIDForContact:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)addObserverForDowntimeStatuses:(id /* block */)arg1;
- (id)biomeSink;
- (void)dealloc;
- (id)downtimeStatuses;
- (id)init;
- (id)notificationCenter;
- (void)removeObserver:(id)arg1;
- (void)setBiomeSink:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setupSink;
- (int)statusForSTUserID:(id)arg1 forceRecheck:(bool)arg2;
- (void)updateWithChildState:(id)arg1;

@end
