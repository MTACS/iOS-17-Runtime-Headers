
@interface CPAnalyticsMetricEventRoute : NSObject {
    NSString * _destination;
    NSString * _destinationEventKey;
    NSArray * _propertiesToInclude;
}

@property (nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) NSString *destinationEventKey;
@property (nonatomic, readonly) NSArray *propertiesToInclude;

- (void).cxx_destruct;
- (id)destination;
- (id)destinationEventKey;
- (id)initWithConfig:(id)arg1;
- (id)propertiesToInclude;

@end
