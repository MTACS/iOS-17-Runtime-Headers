
@interface HMMTRSoftwareUpdateProviderQueryResponseParams : NSObject {
    NSNumber * _delayedActionTime;
    NSString * _imageURI;
    NSData * _metadataForRequestor;
    NSNumber * _softwareVersion;
    NSString * _softwareVersionString;
    NSNumber * _status;
    NSData * _updateToken;
    NSNumber * _userConsentNeeded;
}

@property (readonly) NSNumber *delayedActionTime;
@property (readonly) NSString *imageURI;
@property (readonly) NSData *metadataForRequestor;
@property (readonly) NSNumber *softwareVersion;
@property (readonly) NSString *softwareVersionString;
@property (readonly) NSNumber *status;
@property (readonly) NSData *updateToken;
@property (readonly) NSNumber *userConsentNeeded;

- (void).cxx_destruct;
- (id)delayedActionTime;
- (id)imageURI;
- (id)initWithStatus:(id)arg1 delayedActionTime:(id)arg2 imageURI:(id)arg3 softwareVersion:(id)arg4 softwareVersionString:(id)arg5 updateToken:(id)arg6 userConsentNeeded:(id)arg7 metadataForRequestor:(id)arg8;
- (id)metadataForRequestor;
- (id)softwareVersion;
- (id)softwareVersionString;
- (id)status;
- (id)updateToken;
- (id)userConsentNeeded;

@end
