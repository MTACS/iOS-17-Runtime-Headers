
@interface MBDeviceTransferSession : NSObject <NSSecureCoding> {
    RPFileTransferSession * _fileTransferSession;
}

@property (nonatomic, retain) RPFileTransferSession *fileTransferSession;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fileTransferSession;
- (id)initWithCoder:(id)arg1;
- (void)setFileTransferSession:(id)arg1;

@end
