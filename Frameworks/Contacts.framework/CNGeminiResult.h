
@interface CNGeminiResult : NSObject <NSSecureCoding> {
    NSArray * _availableChannels;
    CNGeminiChannel * _channel;
    long long  _usage;
}

@property (nonatomic, readonly) NSArray *availableChannels;
@property (nonatomic, readonly) CNGeminiChannel *channel;
@property (nonatomic, readonly) long long usage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableChannels;
- (id)channel;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithChannel:(id)arg1 usage:(long long)arg2 availableChannels:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (long long)usage;

@end
