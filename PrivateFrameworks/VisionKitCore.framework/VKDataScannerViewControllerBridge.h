
@interface VKDataScannerViewControllerBridge : NSObject {
    <VKDataScannerViewControllerBridgeDelegate> * _delegate;
    bool  _isScanningForBarcodes;
    bool  _isScanningForText;
    struct MGNotificationTokenStruct { } * _notificationToken;
    NSDate * _sessionStartDate;
}

@property (nonatomic) <VKDataScannerViewControllerBridgeDelegate> *delegate;

+ (bool)isCameraRestricted;
+ (bool)isOpticalFlowForTextEnabled;
+ (bool)isSupported;

- (void).cxx_destruct;
- (void)beginSessionForText:(bool)arg1 barcodes:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (void)endSession;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
