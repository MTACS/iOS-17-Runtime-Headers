
@interface IDSLocalDeliverySocketOpenedMetric : NSObject <CUTCoreAnalyticsMetric> {
    bool  _isToDefaultPairedDevice;
    unsigned long long  _openError;
    NSString * _service;
    unsigned long long  _socketError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isToDefaultPairedDevice;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long openError;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) unsigned long long socketError;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithService:(id)arg1 isToDefaultPairedDevice:(bool)arg2 openError:(unsigned long long)arg3 socketError:(unsigned long long)arg4;
- (bool)isToDefaultPairedDevice;
- (id)name;
- (unsigned long long)openError;
- (id)service;
- (unsigned long long)socketError;

@end
