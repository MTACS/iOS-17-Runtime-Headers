
@interface IDSWiProxDidSendDataMetric : NSObject <CUTCoreAnalyticsMetric> {
    unsigned long long  _resultCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long resultCode;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (id)initWithResultCode:(unsigned long long)arg1;
- (id)name;
- (unsigned long long)resultCode;

@end
