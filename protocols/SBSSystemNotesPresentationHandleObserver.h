
@protocol SBSSystemNotesPresentationHandleObserver <NSObject>

@optional

- (void)systemNotesPresentationHandle:(SBSSystemNotesPresentationHandle *)arg1 didChangePresentationMode:(long long)arg2;
- (void)systemNotesPresentationHandle:(SBSSystemNotesPresentationHandle *)arg1 didInvalidateWithError:(NSError *)arg2;

@end
