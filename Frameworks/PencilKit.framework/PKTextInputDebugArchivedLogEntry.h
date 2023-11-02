
@interface PKTextInputDebugArchivedLogEntry : PKTextInputDebugLogEntry {
    NSDictionary * _logDictionary;
}

- (void).cxx_destruct;
- (bool)_loadInputDrawingFromDictionary:(id)arg1 errorMessage:(id*)arg2;
- (bool)_loadRecognitionResultFromDictionary:(id)arg1;
- (bool)_loadTargetContentInfoFromDictionary:(id)arg1 targets:(id)arg2;
- (bool)_loadTextInputTargetsFromDictionaries:(id)arg1;
- (id)dictionaryRepresentationWithDetailLevel:(long long)arg1 targetContentLevel:(long long)arg2;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithRecordingLogEntry:(id)arg1 error:(id*)arg2;

@end
