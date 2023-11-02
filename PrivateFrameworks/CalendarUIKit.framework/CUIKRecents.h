
@interface CUIKRecents : NSObject

+ (id)_archivedInstance:(id)arg1;
+ (id)directoryLocationForRecent:(id)arg1 onSource:(id)arg2;
+ (id)locationForRecent:(id)arg1;
+ (id)logHandle;
+ (id)mapKitHandleForRecent:(id)arg1;
+ (id)mapKitStyleAttributesForRecent:(id)arg1;
+ (bool)recentDirectoryLocation:(id)arg1 matchesSource:(id)arg2;
+ (id)recentEventWithRecentContact:(id)arg1 styleAttributes:(id)arg2;
+ (id)recentForDirectoryLocation:(id)arg1 onSource:(id)arg2;
+ (id)recentForLocation:(id)arg1 withAddressString:(id)arg2 andTitle:(id)arg3 mapItem:(id)arg4;
+ (bool)recentIsDirectoryLocation:(id)arg1;
+ (bool)recentMissingStyleAttributes:(id)arg1;

@end
