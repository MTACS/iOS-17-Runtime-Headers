
@interface SiriAnalyticsXPCLargeMessageEnvelope : NSObject <NSCopying, NSSecureCoding> {
    NSString * _largeMessagePath;
    NSData * _serializedDataUploadMessage;
}

@property (nonatomic, readonly, copy) NSString *largeMessagePath;
@property (nonatomic, readonly, copy) NSData *serializedDataUploadMessage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLargeMessagePath:(id)arg1 serializedDataUploadMessage:(id)arg2;
- (id)largeMessagePath;
- (id)serializedDataUploadMessage;

@end
