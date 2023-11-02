
@interface PCProgressEvent : NSObject <NSSecureCoding> {
    NSError * _error;
    long long  _eventType;
    NSString * _mediaRemoteID;
}

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, copy) NSString *mediaRemoteID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (long long)eventType;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithEventType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaRemoteID;
- (void)setMediaRemoteID:(id)arg1;

@end
