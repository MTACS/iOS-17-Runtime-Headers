
@protocol IKJSPlayerMediaItemChangeReason <JSExport>

@required

- (long long)ERRORED;
- (long long)FORWARDED_TO_END;
- (long long)PLAYED_TO_END;
- (long long)PLAYLIST_CHANGED;
- (long long)UNKNOWN;
- (long long)USER_INITIATED;

@end
