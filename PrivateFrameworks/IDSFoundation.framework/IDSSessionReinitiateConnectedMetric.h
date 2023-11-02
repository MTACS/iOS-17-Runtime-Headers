
@interface IDSSessionReinitiateConnectedMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSString * _guid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *guid;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)guid;
- (id)initWithGuid:(id)arg1;
- (id)name;

@end
