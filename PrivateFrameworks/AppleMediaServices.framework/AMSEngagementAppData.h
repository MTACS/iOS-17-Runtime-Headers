
@interface AMSEngagementAppData : NSObject <NSCopying> {
    NSArray * _cachedResponses;
    NSArray * _eventFilters;
    NSString * _identifier;
}

@property (nonatomic, retain) NSArray *cachedResponses;
@property (nonatomic, retain) NSArray *eventFilters;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)cachedResponses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)eventFilters;
- (id)exportObject;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 cacheObject:(id)arg2;
- (void)setCachedResponses:(id)arg1;
- (void)setEventFilters:(id)arg1;

@end
