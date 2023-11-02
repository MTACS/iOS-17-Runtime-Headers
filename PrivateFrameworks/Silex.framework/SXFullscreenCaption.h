
@interface SXFullscreenCaption : NSObject <SXTextSourceDataSource> {
    SXFormattedText * _caption;
    <SXFullscreenCaptionDataSource> * _dataSource;
    NSString * _text;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)additionsForTextSource:(id)arg1;
- (id)componentTextStyleForTextSource:(id)arg1 inheritingFromDefaultStyles:(bool)arg2;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (id)defaultComponentTextStyleForTextSource:(id)arg1;
- (id)defaultComponentTextStylesForTextSource:(id)arg1;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)textStyleForIdentifier:(id)arg1;

@end
