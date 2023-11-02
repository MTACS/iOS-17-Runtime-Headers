
@interface IDSWiProxDidConnectToPeerMetric : NSObject <CUTCoreAnalyticsMetric> {
    unsigned long long  _duration;
    unsigned long long  _resultCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) unsigned long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long resultCode;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (id)initWithDuration:(unsigned long long)arg1 resultCode:(unsigned long long)arg2;
- (id)name;
- (unsigned long long)resultCode;

@end
