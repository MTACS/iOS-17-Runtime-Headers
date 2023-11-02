
@interface IDSDuplicatedMessageMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (id)init;
- (id)name;

@end
