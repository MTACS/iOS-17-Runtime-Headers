
@interface SVXTapToRadarExtraContent : NSObject {
    NSArray * _attachmentURLs;
    NSArray * _deviceIDs;
    NSArray * _extensionIDs;
}

@property (nonatomic, retain) NSArray *attachmentURLs;
@property (nonatomic, retain) NSArray *deviceIDs;
@property (nonatomic, retain) NSArray *extensionIDs;

- (void).cxx_destruct;
- (id)attachmentURLs;
- (id)deviceIDs;
- (id)extensionIDs;
- (void)setAttachmentURLs:(id)arg1;
- (void)setDeviceIDs:(id)arg1;
- (void)setExtensionIDs:(id)arg1;

@end
