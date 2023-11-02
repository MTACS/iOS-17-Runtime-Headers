
@protocol MSChangeActionable <NSObject>

@required

- (EFFuture *)changeActionFuture;
- (bool)isUndoSupported;
- (EMMessageRepository *)messageRepository;

@end
