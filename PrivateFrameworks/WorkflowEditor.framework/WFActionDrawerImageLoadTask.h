
@interface WFActionDrawerImageLoadTask : NSObject {
    bool  _canceled;
}

@property (getter=isCanceled, nonatomic, readonly) bool canceled;

- (void)cancel;
- (bool)isCanceled;

@end
