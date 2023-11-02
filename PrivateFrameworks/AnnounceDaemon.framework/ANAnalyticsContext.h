
@interface ANAnalyticsContext : NSObject <ANAnalyticsPayloadProvider> {
    bool  _isEndpoint;
}

@property (readonly) NSDictionary *analyticsPayload;
@property (nonatomic) bool isEndpoint;

+ (id)contextWithAnnouncer:(id)arg1;
+ (id)contextWithEndpointID:(id)arg1;

- (id)analyticsPayload;
- (bool)isEndpoint;
- (void)setIsEndpoint:(bool)arg1;

@end
