
@interface IMTextMessageAttributedStringContent : NSObject {
    NSArray * _fileTransferGuids;
    NSAttributedString * _messageBodyWithNativeAttributes;
}

@property (nonatomic, readonly) NSArray *fileTransferGuids;
@property (nonatomic, readonly) NSAttributedString *messageBodyWithNativeAttributes;

- (void).cxx_destruct;
- (id)fileTransferGuids;
- (id)initWithMessageBodyWithNativeAttributes:(id)arg1 fileTransferGuids:(id)arg2;
- (id)messageBodyWithNativeAttributes;

@end
