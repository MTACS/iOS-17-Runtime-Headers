
@interface MTFeedUpdateMetricsAction : NSObject

+ (id)error;
+ (id)fetchFeedsExpectedToUpdate;
+ (id)finishedWithoutURL;
+ (id)notificationReceived;
+ (id)notificationScheduled;
+ (id)notificationScheduledViaCarousel;
+ (id)notificationSetRetryFlag;
+ (id)notificationTapped;
+ (id)pageParser;
+ (id)parser;
+ (id)podcastDataSource;
+ (id)processCarouselTask;

- (void).cxx_destruct;
- (id)init;

@end
