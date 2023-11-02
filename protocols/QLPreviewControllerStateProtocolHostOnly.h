
@protocol QLPreviewControllerStateProtocolHostOnly <QLPreviewControllerStateProtocol>

@required

- (QLItem *)currentItem;
- (void)remoteViewControllerWasInvalidated;

@end
