
@interface CHRecognitionSessionVersion : NSObject <NSSecureCoding> {
    long long  _sessionResultVersion;
    long long  _sessionVersion;
}

@property (nonatomic, readonly) long long sessionResultVersion;
@property (nonatomic, readonly) long long sessionVersion;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionVersion:(long long)arg1 sessionResultVersion:(long long)arg2;
- (bool)isValidSessionResultVersion;
- (bool)isValidSessionVersion;
- (long long)sessionResultVersion;
- (long long)sessionVersion;

@end
