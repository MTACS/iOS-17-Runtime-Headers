
@interface SXDarkModePolicyHandler : NSObject <SXDarkModePolicyHandler> {
    <SXDarkModeConfiguration> * _darkModeConfiguration;
    <SXDocumentProviding> * _documentProvider;
    NSMutableArray * _exceptions;
}

@property (nonatomic, readonly) <SXDarkModeConfiguration> *darkModeConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentProviding> *documentProvider;
@property (nonatomic, readonly) NSMutableArray *exceptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPolicyException:(id)arg1;
- (id)darkModeConfiguration;
- (id)documentProvider;
- (id)exceptions;
- (id)initWithDocumentProvider:(id)arg1 darkModeConfiguration:(id)arg2;
- (bool)shouldApplyDarkModeToBackgroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
- (bool)shouldApplyDarkModeToBackgroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
- (bool)shouldApplyDarkModeToComponent:(id)arg1 DOM:(id)arg2;
- (bool)shouldApplyDarkModeToComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
- (bool)shouldApplyDarkModeToComponentStylesForComponent:(id)arg1 DOM:(id)arg2;
- (bool)shouldApplyDarkModeToDOM:(id)arg1 layoutOptions:(id)arg2;
- (bool)shouldApplyDarkModeToDocumentStyle:(id)arg1 DOM:(id)arg2 layoutOptions:(id)arg3;
- (bool)shouldApplyDarkModeToForegroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
- (bool)shouldApplyDarkModeToForegroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
- (bool)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg1 DOM:(id)arg2;
- (bool)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg1 DOM:(id)arg2;

@end
