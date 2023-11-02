
@interface STBackgroundActivitiesStatusDomainVisualDescriptorTransformer : NSObject <STStatusDomainDataTransforming> {
    STBackgroundActivityManager * _backgroundActivityManager;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBackgroundActivityManager:(id)arg1;
- (id)transformedDataForData:(id)arg1;

@end
