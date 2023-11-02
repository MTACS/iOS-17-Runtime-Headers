
@interface FBKSPendingConsent : NSObject {
    NSNumber * _ID;
    NSString * _agreeButtonText;
    NSString * _bodyText;
    NSString * _declineButtonText;
    bool  _isRequired;
    NSURL * _learnMoreURL;
    NSString * _symbolImageName;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSNumber *ID;
@property (nonatomic, readonly) NSString *agreeButtonText;
@property (nonatomic, readonly) NSString *bodyText;
@property (nonatomic, readonly) NSString *consentTypeString;
@property (nonatomic, readonly) NSString *declineButtonText;
@property (nonatomic, readonly) bool isRequired;
@property (nonatomic, readonly) NSURL *learnMoreURL;
@property (nonatomic, readonly) NSString *symbolImageName;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)ID;
- (id)agreeButtonText;
- (id)bodyText;
- (id)consentTypeString;
- (id)declineButtonText;
- (id)initWithDictionary:(id)arg1;
- (bool)isRequired;
- (id)learnMoreURL;
- (id)symbolImageName;
- (id)title;
- (unsigned long long)type;

@end
