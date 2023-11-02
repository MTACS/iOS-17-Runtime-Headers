
@protocol VRXInteractionDelegate <NSObject>

@optional

- (void)cancelSpeechSynthesis;
- (void)closeButtonTapped;
- (void)containsComponentWithAction;
- (void)createButtons:(void *)arg1 :(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)didEndEditing;
- (void)emitInstrumentationEvent:(VRXInstrumentationEvent *)arg1;
- (void)emitInstrumentationEvent:(PBCodable *)arg1 requiresNewTurn:(bool)arg2;
- (void)hideBackgroundBehindSiri;
- (void)informHostListItemCount:(long long)arg1;
- (void)informHostOfViewResize:(struct CGSize { double x1; double x2; })arg1;
- (void)navigateWithAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)navigateWithPluginModelData:(NSData *)arg1 bundleName:(NSString *)arg2;
- (void)navigateWithResponseData:(NSData *)arg1;
- (void)navigateWithSFCommand:(SFCommand *)arg1;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)performNextSnippetWithMachineUtterance:(NSString *)arg1;
- (void)performNextSnippetWithResponseData:(NSData *)arg1;
- (void)performSFCommand:(SFCommand *)arg1;
- (void)performShowResponse:(NSData *)arg1;
- (void)recalculateLeadingInsetSeparator:(double)arg1;
- (void)requestsKeyWindow;
- (void)restartSpeechSynthesis;
- (void)sharedStateDidUpdate:(NSDictionary *)arg1;
- (void)willBeginEditing;

@end
