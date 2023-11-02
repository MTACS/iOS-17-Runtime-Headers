
@interface HMMTRSoftwareUpdateProviderApplyUpdateRequestParams : NSObject {
    NSNumber * _softwareVersion;
    NSData * _updateToken;
}

@property (readonly) NSNumber *softwareVersion;
@property (readonly) NSData *updateToken;

- (void).cxx_destruct;
- (id)initWithUpdateToken:(id)arg1 softwareVersion:(id)arg2;
- (id)softwareVersion;
- (id)updateToken;

@end
