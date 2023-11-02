
@interface PAAccessoryManager : NSObject {
    bool  _shouldSendUpdate;
}

@property (nonatomic) bool shouldSendUpdate;

+ (id)sharedInstance;

- (id)init;
- (void)sendSSLUpdateToAccessory;
- (void)sendUpdateToAccessory;
- (void)setShouldSendUpdate:(bool)arg1;
- (bool)shouldSendUpdate;

@end
