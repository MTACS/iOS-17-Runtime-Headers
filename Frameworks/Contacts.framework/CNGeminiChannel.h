
@interface CNGeminiChannel : NSObject <NSSecureCoding> {
    bool  _available;
    NSString * _channelIdentifier;
    NSString * _handle;
    NSString * _localizedBadgeLabel;
    NSString * _localizedLabel;
    TUSenderIdentity * _senderIdentity;
}

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (nonatomic, readonly) NSString *channelIdentifier;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) NSString *localizedBadgeLabel;
@property (nonatomic, readonly) NSString *localizedLabel;
@property (nonatomic, readonly) TUSenderIdentity *senderIdentity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channelIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)initWithCoder:(id)arg1;
- (bool)isAvailable;
- (id)localizedBadgeLabel;
- (id)localizedLabel;
- (id)senderIdentity;

@end
