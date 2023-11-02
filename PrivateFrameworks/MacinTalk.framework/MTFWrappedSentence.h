
@interface MTFWrappedSentence : MTFWrappedSpeechElement

@property (nonatomic, readonly) float fBaseFloor;
@property (nonatomic, readonly) float fBaseRange;
@property (nonatomic, readonly) float fBaseRate;
@property (nonatomic, readonly) float fDuration;
@property (nonatomic, readonly) short fFinalRate;
@property (nonatomic, readonly) short fFlags;
@property (nonatomic, readonly) short fNumWords;

- (struct MTFESentence { int (**x1)(); short x2; BOOL x3; struct MTFESpeechElement {} *x4; struct MTFESpeechElement {} *x5; struct MTFESpeechElement {} *x6; struct MTFESpeechElement {} *x7; struct MTFESpeechElement {} *x8; short x9; float x10; short x11; short x12; float x13; float x14; float x15; struct MTFESpeechElement {} *x16; }*)elem;
- (float)fBaseFloor;
- (float)fBaseRange;
- (float)fBaseRate;
- (float)fDuration;
- (short)fFinalRate;
- (short)fFlags;
- (short)fNumWords;

@end
