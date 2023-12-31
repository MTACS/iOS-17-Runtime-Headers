
@interface VUIMetricsPageEventData : NSObject {
    NSDictionary * _eventData;
    NSString * _pageId;
    NSString * _pageType;
}

@property (nonatomic, retain) NSDictionary *eventData;
@property (nonatomic, retain) NSString *pageId;
@property (nonatomic, retain) NSString *pageType;

+ (id)createWithMetricsData:(id)arg1;
+ (id)createWithPageId:(id)arg1 andPageType:(id)arg2 andEventData:(id)arg3;
+ (id)createWithPageType:(id)arg1;

- (void).cxx_destruct;
- (id)eventData;
- (id)generateMetricsDataDictionary;
- (id)pageId;
- (id)pageType;
- (void)setEventData:(id)arg1;
- (void)setPageId:(id)arg1;
- (void)setPageType:(id)arg1;

@end
