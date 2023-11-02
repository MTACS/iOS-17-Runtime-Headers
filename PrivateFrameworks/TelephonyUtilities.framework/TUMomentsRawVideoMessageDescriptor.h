
@interface TUMomentsRawVideoMessageDescriptor : NSObject <NSSecureCoding> {
    NSUUID * _uuid;
    TUSandboxExtendedURL * _videoURL;
}

@property (nonatomic, readonly, retain) NSUUID *uuid;
@property (nonatomic, readonly, retain) TUSandboxExtendedURL *videoURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 videoURL:(id)arg2;
- (id)uuid;
- (id)videoURL;

@end
