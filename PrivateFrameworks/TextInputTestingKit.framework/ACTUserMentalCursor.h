
@interface ACTUserMentalCursor : NSObject {
    NSArray * _externalSegments;
    NSString * _intendedText;
    NSArray * _internalSegments;
    unsigned long long  _positionInCurrentInternalSegment;
    unsigned long long  _segmentCursor;
}

@property (nonatomic, readonly) bool atBeginningOfText;
@property (nonatomic, readonly) bool atEndOfText;
@property (nonatomic, readonly) NSString *currentComposedCharacter;
@property (nonatomic, readonly) NSString *currentExternalSegment;
@property (nonatomic, readonly) NSString *currentInternalSegment;
@property (nonatomic, readonly) NSString *currentLongCharacter;
@property (nonatomic, readonly) NSArray *externalSegments;
@property (nonatomic, readonly) NSString *intendedText;
@property (nonatomic, readonly) NSArray *internalSegments;
@property (nonatomic, readonly) NSString *nextLongCharacter;
@property (nonatomic, readonly) bool nextLongCharacterEndsSegment;
@property (nonatomic) unsigned long long positionInCurrentInternalSegment;
@property (nonatomic, readonly) NSString *previousLongCharacter;
@property (nonatomic) unsigned long long segmentCursor;

- (void).cxx_destruct;
- (void)advancePositionByString:(id)arg1;
- (bool)advanceSegmentCursor;
- (bool)atBeginningOfText;
- (bool)atEndOfText;
- (id)currentComposedCharacter;
- (id)currentExternalSegment;
- (id)currentInternalSegment;
- (id)currentLongCharacter;
- (void)enumerateRemainingLongCharactersForCurrentSegment:(id /* block */)arg1;
- (id)externalSegments;
- (id)init;
- (id)initWithInternalSegments:(id)arg1 externalSegments:(id)arg2;
- (id)initWithInternalSegments:(id)arg1 externalSegments:(id)arg2 segmentCursor:(unsigned long long)arg3 position:(unsigned long long)arg4;
- (id)intendedText;
- (id)internalSegments;
- (id)longCharacterAtSegment:(unsigned long long)arg1 position:(unsigned long long)arg2;
- (id)nextLongCharacter;
- (bool)nextLongCharacterEndsSegment;
- (unsigned long long)positionInCurrentInternalSegment;
- (id)previousLongCharacter;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfInputSegmentsForCandidate:(id)arg1;
- (void)rewindPositionByString:(id)arg1;
- (bool)rewindSegmentCursor;
- (unsigned long long)segmentCursor;
- (void)setPositionInCurrentInternalSegment:(unsigned long long)arg1;
- (void)setSegmentCursor:(unsigned long long)arg1;

@end
