
@interface CUIKOROccurrenceStateCachedLocation : NSObject {
    NSAttributedString * _generatedLocationString;
    NSURL * _originalConferenceURL;
    bool  _originalHasNewTimeProposed;
    NSString * _originalOccurrenceLocation;
    bool  _originalOccurrenceLocationIsPrediction;
    NSString * _originalOccurrenceLocationWithoutPrediction;
}

@property (nonatomic, readonly) NSAttributedString *generatedLocationString;
@property (nonatomic, readonly) NSURL *originalConferenceURL;
@property (nonatomic, readonly) bool originalHasNewTimeProposed;
@property (nonatomic, readonly) NSString *originalOccurrenceLocation;
@property (nonatomic, readonly) bool originalOccurrenceLocationIsPrediction;
@property (nonatomic, readonly) NSString *originalOccurrenceLocationWithoutPrediction;

- (void).cxx_destruct;
- (id)generatedLocationString;
- (id)initWithGeneratedLocationString:(id)arg1 originalOccurrenceLocation:(id)arg2 originalOccurrenceLocationWithoutPrediction:(id)arg3 originalOccurrenceLocationIsPrediction:(bool)arg4 originalHasNewTimeProposed:(bool)arg5 originalConferenceURL:(id)arg6;
- (id)originalConferenceURL;
- (bool)originalHasNewTimeProposed;
- (id)originalOccurrenceLocation;
- (bool)originalOccurrenceLocationIsPrediction;
- (id)originalOccurrenceLocationWithoutPrediction;

@end
