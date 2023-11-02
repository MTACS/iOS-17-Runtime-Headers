
@protocol IMAnimatedImagePreviewGeneratorProtocol

@required

- (NSURL *)generateAndPersistAnimatedPreviewFromSourceURL:(NSURL *)arg1 senderContext:(IMSenderContext *)arg2 forWidth:(double)arg3 withTransferGUID:(NSString *)arg4 isSticker:(bool)arg5;

@end
