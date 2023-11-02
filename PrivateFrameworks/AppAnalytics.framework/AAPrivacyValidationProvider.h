
@interface AAPrivacyValidationProvider : NSObject {
    void bridgedPrivacyValidation;
}

@property (nonatomic, retain) AAPrivacyValidation *privacyValidation;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPrivacyValidation:(id)arg1;
- (id)privacyValidation;
- (void)setPrivacyValidation:(id)arg1;

@end
