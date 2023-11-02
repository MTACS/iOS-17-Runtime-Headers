
@interface PKMentionQuery : PKDetectionQuery

@property (nonatomic, copy) NSSet *validSuffixes;

- (id)initWithRecognitionSessionManager:(id)arg1;
- (void)queryDidUpdateResult:(id)arg1;
- (void)setValidSuffixes:(id)arg1;
- (id)validSuffixes;

@end
