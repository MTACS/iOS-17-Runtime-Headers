
@interface AATrackingConsent : NSObject {
    void accessGroup;
    void consented;
    void lock;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)allow;
- (id)init;

@end
