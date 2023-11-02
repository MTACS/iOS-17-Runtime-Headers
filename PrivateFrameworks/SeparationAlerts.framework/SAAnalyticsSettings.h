
@interface SAAnalyticsSettings : NSObject {
    bool  _enableSubmission;
}

@property bool enableSubmission;

- (bool)enableSubmission;
- (id)init;
- (id)initWithEnableSubmission:(bool)arg1;
- (void)setEnableSubmission:(bool)arg1;

@end
