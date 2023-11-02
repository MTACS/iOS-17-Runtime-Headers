
@interface BCSNotificationIcon : NSObject {
    <BCSAction> * _action;
}

@property (nonatomic, readonly, copy) NSURL *imageURL;

+ (id)nfcIcon;
+ (id)qrCodeIcon;
+ (id)viewfinderIcon;

- (void).cxx_destruct;
- (id)_clipIconURLForAction:(id)arg1 scale:(double)arg2;
- (id)_notificationIconDataURLForApp:(id)arg1 scale:(float)arg2;
- (id)imageURL;
- (id)initWithAction:(id)arg1;

@end
