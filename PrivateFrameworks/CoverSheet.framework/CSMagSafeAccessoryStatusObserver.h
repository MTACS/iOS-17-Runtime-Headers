
@interface CSMagSafeAccessoryStatusObserver : NSObject {
    <NSObject> * _animationStatusNotificationToken;
    <NSObject> * _attachmentNotificationToken;
    <CSMagSafeAccessoryStatusDelegate> * _delegate;
    <NSObject> * _detachmentNotificationToken;
    <CSMagSafeAccessoryStatusProviding> * _statusProvider;
}

@property (nonatomic) <CSMagSafeAccessoryStatusDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoverSheetContext:(id)arg1;
- (void)notifiedWithAccessoryAnimationStatusChanged;
- (void)notifiedWithAccessoryAttached;
- (void)notifiedWithAccessoryDetached;
- (void)setDelegate:(id)arg1;

@end
