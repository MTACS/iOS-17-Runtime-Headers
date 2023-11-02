
@interface EDSmartSortSuggestionsInterface : NSObject <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)salientSendersForField:(long long)arg1 minCount:(unsigned long long)arg2 minScore:(double)arg3 limit:(unsigned long long)arg4;
+ (id)topSalienciesForMailboxIDs:(id)arg1 limit:(long long)arg2 error:(id*)arg3;

@end
