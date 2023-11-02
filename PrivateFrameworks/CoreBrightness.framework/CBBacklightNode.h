
@interface CBBacklightNode : NSObject {
    CBChromaticCorrectionParams * _ammolite;
    NSObject<OS_os_log> * _log;
    CBTwilightParams * _twilight;
}

@property (readonly) CBChromaticCorrectionParams *ammolite;
@property (readonly) CBTwilightParams *twilight;

- (id)ammolite;
- (id)initWithService:(unsigned int)arg1;
- (id)twilight;

@end
