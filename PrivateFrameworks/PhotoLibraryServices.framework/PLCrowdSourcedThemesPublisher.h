
@interface PLCrowdSourcedThemesPublisher : NSObject

+ (id)_biomeStreamForStream:(unsigned long long)arg1 pathManager:(id)arg2;
+ (id)_nameForStream:(unsigned long long)arg1;
+ (void)publishUUIDs:(id)arg1 stream:(unsigned long long)arg2 pathManager:(id)arg3;
+ (id)publishedUUIDsInStream:(unsigned long long)arg1 pathManager:(id)arg2;

@end
