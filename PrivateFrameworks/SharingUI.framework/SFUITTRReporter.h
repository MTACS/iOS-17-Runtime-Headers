
@interface SFUITTRReporter : NSObject {
    SFUITTRReport * _internalReport;
}

@property (nonatomic, readonly) SFUITTRReport *internalReport;

+ (id)reporterForPeopleSuggestions;

- (void).cxx_destruct;
- (id)_createSchemeURL;
- (id)initWithReport:(id)arg1;
- (id)internalReport;
- (void)report;

@end
