
@interface HMDPendingBulkSendListener : NSObject {
    NSString * _fileType;
    <HMDDataStreamBulkSendListener> * _listener;
}

@property (nonatomic, retain) NSString *fileType;
@property (nonatomic) <HMDDataStreamBulkSendListener> *listener;

- (void).cxx_destruct;
- (id)fileType;
- (id)initWithListener:(id)arg1 fileType:(id)arg2;
- (id)listener;
- (void)setFileType:(id)arg1;
- (void)setListener:(id)arg1;

@end
