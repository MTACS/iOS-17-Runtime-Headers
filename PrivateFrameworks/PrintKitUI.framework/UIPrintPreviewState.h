
@interface UIPrintPreviewState : NSObject {
    bool  _cancelled;
}

@property bool cancelled;

- (bool)cancelled;
- (void)setCancelled:(bool)arg1;

@end
