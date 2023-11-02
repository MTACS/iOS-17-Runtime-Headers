
@interface WDCancellationToken : NSObject {
    bool  _cancelled;
}

@property (getter=isCancelled, nonatomic) bool cancelled;

- (void)cancel;
- (bool)isCancelled;
- (void)setCancelled:(bool)arg1;

@end
