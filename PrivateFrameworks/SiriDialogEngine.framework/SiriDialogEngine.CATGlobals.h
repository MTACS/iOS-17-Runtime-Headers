
@interface SiriDialogEngine.CATGlobals : NSObject {
    void currentTime;
    void customPronunciations;
    void dialogMetadata;
    void globalParameters;
    void interactionId;
    void isMultiUserEnabled;
    void randomSeed;
    void requiresUserGrounding;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  responseMode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  siriLocale;
    void siriVoiceGender;
    void userSettings;
}

- (void).cxx_destruct;
- (id)init;

@end
