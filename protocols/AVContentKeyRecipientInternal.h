
@protocol AVContentKeyRecipientInternal <AVContentKeyRecipient>

@required

- (int)_attachToContentKeySession:(AVContentKeySession *)arg1 contentKeyBoss:(struct CMBaseObject { }*)arg2 failedSinceAlreadyAttachedToAnotherSession:(bool*)arg3;
- (bool)_attachedToExternalContentKeySession;
- (AVContentKeySession *)contentKeySession;
- (void)expire;

@end
