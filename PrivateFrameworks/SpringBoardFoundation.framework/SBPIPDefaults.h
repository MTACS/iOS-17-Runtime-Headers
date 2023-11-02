
@interface SBPIPDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) bool allowAutoPIP;
@property (nonatomic) bool initiallyUsesMinimumPreferredContentSize;
@property (nonatomic) NSDictionary *lastKnownCornerPositionByContentType;
@property (nonatomic) NSDictionary *lastKnownSizeByContentType;
@property (nonatomic, readonly) bool visualizeKeyboardFrame;
@property (nonatomic, readonly) bool visualizePositionRegions;

- (void)_bindAndRegisterDefaults;
- (unsigned long long)lastKnownCornerPositionForContentType:(id)arg1;
- (double)lastKnownSizeForContentType:(id)arg1;
- (void)setLastKnownCornerPosition:(unsigned long long)arg1 contentType:(id)arg2;
- (void)setLastKnownSize:(double)arg1 contentType:(id)arg2;

@end
