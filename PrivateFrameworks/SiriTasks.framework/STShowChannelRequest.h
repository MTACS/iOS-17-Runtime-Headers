
@interface STShowChannelRequest : AFSiriRequest {
    STMediaChannel * _channel;
}

@property (nonatomic, readonly) STMediaChannel *channel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithChannel:(id)arg1;
- (id)channel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
