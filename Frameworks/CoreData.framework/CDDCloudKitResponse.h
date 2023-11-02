
@interface CDDCloudKitResponse : NSObject <NSCoding, NSSecureCoding> {
    NSError * _error;
    CDDCloudKitMessage * _message;
    bool  _success;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
