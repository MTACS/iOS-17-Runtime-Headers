
@protocol HMSoftwareUpdateDelegate <NSObject>

@optional

- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateDocumentation:(HMSoftwareUpdateDocumentation *)arg2;
- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateDocumentationAvailable:(bool)arg2;
- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateNeedsAttentionReasons:(unsigned long long)arg2;
- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateState:(long long)arg2;

@end
