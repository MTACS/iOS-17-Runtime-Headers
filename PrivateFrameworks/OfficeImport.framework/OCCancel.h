
@interface OCCancel : NSObject <TCCancelDelegate> {
    bool  mIsCancelled;
    bool  mIsQuit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancel;
- (id)init;
- (bool)isCancelled;
- (bool)isQuit;
- (void)quit;

@end
