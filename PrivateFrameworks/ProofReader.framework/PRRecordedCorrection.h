
@interface PRRecordedCorrection : NSObject {
    NSString * _correctedString;
    NSTextCheckingResult * _correctionResult;
    bool  _hasRecordedResponse;
}

@property bool hasRecordedResponse;

- (id)correctedString;
- (id)correctionResult;
- (void)dealloc;
- (id)description;
- (bool)hasRecordedResponse;
- (id)initWithCorrectionResult:(id)arg1 correctedString:(id)arg2;
- (void)setHasRecordedResponse:(bool)arg1;

@end
