
@interface SPOfflineAdvertisingKeys : NSObject <NSSecureCoding> {
    NSArray * _keys;
    long long  _rotationInterval;
}

@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSArray *keys;
@property (nonatomic, readonly) long long rotationInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterval:(long long)arg1 keys:(id)arg2;
- (id)keys;
- (long long)rotationInterval;

@end
