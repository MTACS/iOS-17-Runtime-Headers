
@protocol CKTranscriptLayoutCompatibility <NSObject>

@required

- (double)anchorYPosition;
- (void)beginHoldingDynamicsUpdatesForKey:(NSString *)arg1;
- (unsigned char)chatStyle;
- (void)clearParentInitialIndexesAndFinalOffsets;
- (bool)disableDynamicsWhileScrolling;
- (long long)effectIndexForDecorationViewAtIndex:(long long)arg1;
- (void)endHoldingDynamicsUpdatesForKey:(NSString *)arg1;
- (NSIndexSet *)indicesOfChatItemsToBeInsertedWithoutFading;
- (NSIndexSet *)indicesOfChatItemsToBeRemovedWithoutFading;
- (NSIndexSet *)indicesOfReplyChatItemsToBeInserted;
- (void)invalidateDisplayLink;
- (bool)isHoldingBoundsInvalidation;
- (bool)isInlineAnimatingOut;
- (bool)isResting;
- (bool)isUsingInitialLayoutAttributesForRotation;
- (bool)isUsingOverlayLayout;
- (void)reloadData;
- (void)reloadLayout;
- (void)setAnchorYPosition:(double)arg1;
- (void)setChatStyle:(unsigned char)arg1;
- (void)setDisableDynamicsWhileScrolling:(bool)arg1;
- (void)setHoldingBoundsInvalidation:(bool)arg1;
- (void)setIndicesOfChatItemsToBeInsertedWithoutFading:(NSIndexSet *)arg1;
- (void)setIndicesOfChatItemsToBeRemovedWithoutFading:(NSIndexSet *)arg1;
- (void)setIndicesOfReplyChatItemsToBeInserted:(NSIndexSet *)arg1;
- (void)setInitialIndex:(unsigned long long)arg1 forParentOfAssociatedItemInsertedAtIndex:(unsigned long long)arg2;
- (void)setInlineAnimatingOut:(bool)arg1;
- (void)setNeedsDynamicsUpdate;
- (void)setSizeForRotation:(struct CGSize { double x1; double x2; })arg1;
- (void)setTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUseInitialLayoutAttributesForRotation:(bool)arg1;
- (void)setUseOverlayLayout:(bool)arg1;
- (void)setVerticalOffset:(double)arg1 forParentOfAssociatedItemDeletedAtIndex:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })sizeForRotation;
- (struct CGPoint { double x1; double x2; })targetContentOffset;
- (void)updateAssociatedLayoutAttributesIfNecessary;

@end
