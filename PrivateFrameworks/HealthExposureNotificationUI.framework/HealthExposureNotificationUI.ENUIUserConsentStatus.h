
@interface HealthExposureNotificationUI.ENUIUserConsentStatus : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dateConsented;
    void textConsented;
    void versionConsented;
}

@property (nonatomic, readonly) NSDate *dateConsented;
@property (nonatomic, readonly) NSString *textConsented;
@property (nonatomic, readonly) NSString *versionConsented;

- (void).cxx_destruct;
- (id)dateConsented;
- (id)init;
- (id)initWithTextConsented:(id)arg1 versionConsented:(id)arg2 dateConsented:(id)arg3;
- (id)textConsented;
- (id)versionConsented;

@end
