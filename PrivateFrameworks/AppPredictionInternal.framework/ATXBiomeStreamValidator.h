
@interface ATXBiomeStreamValidator : NSObject

- (void)validateChronologicalPrivateStreamWithStreamIdentifier:(id)arg1 activity:(id)arg2;
- (void)validateChronologicalPublicStreamWithStreamIdentifier:(id)arg1 activity:(id)arg2;
- (int)validateChronologicalWithStreamIdentifier:(id)arg1 activity:(id)arg2 config:(id)arg3;

@end
