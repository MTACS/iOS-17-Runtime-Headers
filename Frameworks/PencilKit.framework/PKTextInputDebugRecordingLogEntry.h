
@interface PKTextInputDebugRecordingLogEntry : PKTextInputDebugLogEntry {
    PKDrawing * __originalDrawing;
    CHTextInputQueryItem * __resultQueryItem;
}

@property (nonatomic, retain) PKDrawing *_originalDrawing;
@property (nonatomic, retain) CHTextInputQueryItem *_resultQueryItem;

+ (id)_dictionaryRepresentationForDrawing:(id)arg1 detailLevel:(long long)arg2 containsInProgress:(bool)arg3;
+ (id)_dictionaryRepresentationForTarget:(id)arg1;
+ (id)_dictionaryRepresentationForTargetContentInfo:(id)arg1 elementType:(id)arg2 detailLevel:(long long)arg3 contentLevel:(long long)arg4 resultAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 localeIdentifiers:(id)arg6;

- (void).cxx_destruct;
- (void)_extractDataFromResultCommand:(id)arg1;
- (id)_originalDrawing;
- (id)_resultQueryItem;
- (id)dictionaryRepresentationWithDetailLevel:(long long)arg1 targetContentLevel:(long long)arg2;
- (id)initWithResultCommand:(id)arg1;
- (id)inputDrawing;
- (void)set_originalDrawing:(id)arg1;
- (void)set_resultQueryItem:(id)arg1;

@end
