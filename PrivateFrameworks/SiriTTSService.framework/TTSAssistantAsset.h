
@interface TTSAssistantAsset : NSObject {
    void assistantGender;
    void assistantOrder;
    void identifier;
    void name;
    void supportedLanguages;
}

@property (nonatomic, readonly) long long assistantGender;
@property (nonatomic, readonly) long long assistantOrder;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isCustom;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *primaryLanguage;
@property (nonatomic, readonly) NSArray *supportedLanguages;

- (void).cxx_destruct;
- (long long)assistantGender;
- (long long)assistantOrder;
- (id)description;
- (long long)gender;
- (id)identifier;
- (id)init;
- (bool)isCustom;
- (id)name;
- (id)primaryLanguage;
- (id)supportedLanguages;

@end
