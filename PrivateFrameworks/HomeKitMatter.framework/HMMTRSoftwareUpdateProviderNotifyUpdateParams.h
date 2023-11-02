
@interface HMMTRSoftwareUpdateProviderNotifyUpdateParams : NSObject {
    NSNumber * _didTimeout;
    NSNumber * _previousSoftwareVersionNumberForMetrics;
    NSNumber * _softwareVersion;
    NSString * _transportTypeForMetrics;
    NSData * _updateToken;
}

@property (readonly) NSNumber *didTimeout;
@property (readonly) NSNumber *previousSoftwareVersionNumberForMetrics;
@property (readonly) NSNumber *softwareVersion;
@property (readonly) NSString *transportTypeForMetrics;
@property (readonly) NSData *updateToken;

- (void).cxx_destruct;
- (id)didTimeout;
- (id)initWithUpdateToken:(id)arg1 softwareVersion:(id)arg2 didTimeout:(id)arg3;
- (id)initWithUpdateToken:(id)arg1 softwareVersion:(id)arg2 transportTypeForMetrics:(id)arg3 previousSoftwareVersionNumberForMetrics:(id)arg4 didTimeout:(id)arg5;
- (id)previousSoftwareVersionNumberForMetrics;
- (id)softwareVersion;
- (id)transportTypeForMetrics;
- (id)updateToken;

@end
