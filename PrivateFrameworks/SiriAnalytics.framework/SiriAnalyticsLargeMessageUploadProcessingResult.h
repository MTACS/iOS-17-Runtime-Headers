
@interface SiriAnalyticsLargeMessageUploadProcessingResult : NSObject {
    void determinationMade;
    void suppressed;
}

@property (nonatomic, readonly) bool determinationMade;
@property (nonatomic, readonly) bool suppressed;

- (bool)determinationMade;
- (id)init;
- (bool)suppressed;

@end
