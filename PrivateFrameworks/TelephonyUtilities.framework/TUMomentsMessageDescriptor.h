
@interface TUMomentsMessageDescriptor : NSObject <NSSecureCoding> {
    NSUUID * _messageUUID;
    TUSandboxExtendedURL * _thumbnailURL;
    TUSandboxExtendedURL * _videoURL;
}

@property (nonatomic, readonly) NSUUID *messageUUID;
@property (nonatomic, readonly) TUSandboxExtendedURL *thumbnailURL;
@property (nonatomic, readonly) TUSandboxExtendedURL *videoURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageUUID:(id)arg1 videoURL:(id)arg2 thumbnailURL:(id)arg3;
- (id)messageUUID;
- (id)thumbnailURL;
- (id)videoURL;

@end
