
@interface DEDialogStateUseCase : DEDialogState

- (id)allGroundings;
- (id)allRandomIds;
- (id)groundingUsage:(id)arg1;
- (bool)hasAllRandomId:(id)arg1;
- (id)lastRandomIds;
- (double)lastTimestamp;
- (int)usageCount;

@end
