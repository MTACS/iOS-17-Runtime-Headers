
@interface SGQuickResponsesToRobotsConfig : NSObject {
    float  _capsWordsRatioMax;
    bool  _enableFeature;
    unsigned long long  _generalContextLeft;
    unsigned long long  _generalContextRight;
    NSSet * _generalContextWords;
    bool  _insignificantSender;
    unsigned long long  _leftContext;
    bool  _relaxContext;
    unsigned long long  _rightContext;
    NSDictionary * _supportedKeysAndContext;
    unsigned long long  _triggerContext;
    NSSet * _triggerWords;
    bool  _useGeneralContext;
}

@property (nonatomic, readonly) float capsWordsRatioMax;
@property (nonatomic, readonly) bool enableFeature;
@property (nonatomic, readonly) unsigned long long generalContextLeft;
@property (nonatomic, readonly) unsigned long long generalContextRight;
@property (nonatomic, readonly) NSSet *generalContextWords;
@property (nonatomic, readonly) bool insignificantSender;
@property (nonatomic, readonly) unsigned long long leftContext;
@property (nonatomic, readonly) bool relaxContext;
@property (nonatomic, readonly) unsigned long long rightContext;
@property (nonatomic, readonly) NSDictionary *supportedKeysAndContext;
@property (nonatomic, readonly) unsigned long long triggerContext;
@property (nonatomic, readonly) NSSet *triggerWords;
@property (nonatomic, readonly) bool useGeneralContext;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (float)capsWordsRatioMax;
- (bool)enableFeature;
- (unsigned long long)generalContextLeft;
- (unsigned long long)generalContextRight;
- (id)generalContextWords;
- (id)initWithDictionary:(id)arg1;
- (bool)insignificantSender;
- (unsigned long long)leftContext;
- (bool)relaxContext;
- (unsigned long long)rightContext;
- (id)supportedKeysAndContext;
- (unsigned long long)triggerContext;
- (id)triggerWords;
- (bool)useGeneralContext;

@end
