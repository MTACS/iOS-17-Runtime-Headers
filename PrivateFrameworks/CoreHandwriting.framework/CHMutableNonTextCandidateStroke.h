
@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke

@property (nonatomic) long long fallbackClassification;
@property (nonatomic, retain) NSDictionary *supportByStrokeIdentifier;

- (bool)adjustSupportByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 strokeClassification:(long long)arg3;
- (bool)adjustSupportByRemovingStrokeIdentifier:(id)arg1;
- (id)description;
- (void)setFallbackClassification:(long long)arg1;
- (void)setSupportByStrokeIdentifier:(id)arg1;

@end
