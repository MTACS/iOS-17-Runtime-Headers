
@interface NSCloudKitMirroringDelegateSetupRequestOptions : NSCloudKitMirroringRequestOptions {
    bool  _fromNotification;
}

@property (nonatomic) bool fromNotification;

- (id)copy;
- (bool)fromNotification;
- (void)setFromNotification:(bool)arg1;

@end
