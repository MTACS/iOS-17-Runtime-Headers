
@interface SXTextContrastDarkModePolicyException : NSObject <SXDarkModePolicyException> {
    SXJSONObjectMerger * _componentStyleMerger;
    SXJSONObjectMerger * _componentTextStyleMerger;
}

@property (nonatomic, readonly) SXJSONObjectMerger *componentStyleMerger;
@property (nonatomic, readonly) SXJSONObjectMerger *componentTextStyleMerger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentStyleForComponent:(id)arg1 DOM:(id)arg2;
- (id)componentStyleMerger;
- (id)componentTextStyleForButtonComponent:(id)arg1 DOM:(id)arg2;
- (id)componentTextStyleForTextComponent:(id)arg1 DOM:(id)arg2;
- (id)componentTextStyleMerger;
- (id)initWithComponentStyleMerger:(id)arg1 componentTextStyleMerger:(id)arg2;
- (id)mergedComponentTextStyleWithIdentifiers:(id)arg1 DOM:(id)arg2;
- (id)opaqueComponentStyleForComponent:(id)arg1 DOM:(id)arg2;
- (long long)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg1 DOM:(id)arg2;
- (long long)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg1 DOM:(id)arg2;

@end
