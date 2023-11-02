
@interface ATXSearchFeedbackListenerTargetBiomeStream : NSObject <ATXSearchFeedbackListenerTarget> {
    ATXUniversalBiomeUIStream * _uiStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBiomeUIStream:(id)arg1;
- (void)writeSpotlightEvent:(id)arg1;

@end
