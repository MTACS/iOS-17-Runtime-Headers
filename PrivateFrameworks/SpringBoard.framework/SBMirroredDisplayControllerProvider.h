
@interface SBMirroredDisplayControllerProvider : NSObject <SBDisplayControllerProviding> {
    SBExternalDisplayDefaults * _externalDisplayDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)displayControllerInfoForConnectingDisplay:(id)arg1 configuration:(id)arg2;
- (id)initWithExternalDisplayDefaults:(id)arg1;

@end
