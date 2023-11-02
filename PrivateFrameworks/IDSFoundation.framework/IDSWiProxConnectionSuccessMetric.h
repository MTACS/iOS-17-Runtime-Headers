
@interface IDSWiProxConnectionSuccessMetric : NSObject <CUTCoreAnalyticsMetric> {
    unsigned long long  _duration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) unsigned long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (id)initWithDuration:(unsigned long long)arg1;
- (id)name;

@end
