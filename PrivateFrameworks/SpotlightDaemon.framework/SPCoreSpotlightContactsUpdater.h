
@interface SPCoreSpotlightContactsUpdater : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)updateContactCounts:(id)arg1;
- (id)updatedCountsFromExisting:(id)arg1 result:(long long*)arg2 shouldUpdateMonth:(bool)arg3;

@end
