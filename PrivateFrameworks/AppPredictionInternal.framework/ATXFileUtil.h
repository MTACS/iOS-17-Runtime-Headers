
@interface ATXFileUtil : NSObject

+ (bool)_shouldUpdateCache:(id)arg1 withRefreshRate:(double)arg2 currentTime:(double)arg3;
+ (double)cacheAgeForCache:(id)arg1 withCurrentTime:(double)arg2;
+ (double)cacheAgeForConsumerType:(unsigned char)arg1;
+ (double)cacheAgeForConsumerType:(unsigned char)arg1 basePath:(id)arg2;
+ (bool)cachesAreValidForBasePath:(id)arg1 consumerSubTypes:(id)arg2;
+ (bool)cachesAreValidForConsumerSubTypes:(id)arg1;
+ (bool)shouldUpdateCache:(id)arg1 withRefreshRate:(double)arg2;

@end
