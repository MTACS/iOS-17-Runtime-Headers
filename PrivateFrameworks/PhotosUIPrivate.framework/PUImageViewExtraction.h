
@interface PUImageViewExtraction : NSObject {
    bool  __cancelled;
}

@property (getter=_isCancelled, setter=_setCancelled:) bool _cancelled;

- (bool)_isCancelled;
- (void)_setCancelled:(bool)arg1;
- (void)cancel;

@end
