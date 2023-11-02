
@interface PCProximityEvent : NSObject <NSSecureCoding> {
    NSError * _error;
    long long  _eventType;
    bool  _expectsDisplayContext;
    NSDictionary * _info;
    NSString * _mediaRemoteID;
}

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic) bool expectsDisplayContext;
@property (nonatomic, readonly, copy) NSDictionary *info;
@property (nonatomic, readonly, copy) NSString *mediaRemoteID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (long long)eventType;
- (bool)expectsDisplayContext;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1 mediaRemoteID:(id)arg2;
- (id)initWithType:(long long)arg1 mediaRemoteID:(id)arg2 info:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mediaRemoteID;
- (void)setExpectsDisplayContext:(bool)arg1;

@end
