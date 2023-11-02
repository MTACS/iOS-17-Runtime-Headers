
@interface INSendAnnouncementAnnouncementResolutionResult : INAnnouncementResolutionResult

+ (id)confirmationRequiredWithAnnouncementToConfirm:(id)arg1 forReason:(long long)arg2;
+ (id)unsupportedForReason:(long long)arg1;

- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;
- (id)initWithAnnouncementResolutionResult:(id)arg1;

@end
