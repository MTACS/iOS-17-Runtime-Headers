
@interface AATrustedContactHealthInfo : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    NSDate * _lastValidCheckTimestamp;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSDate *lastValidCheckTimestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 lastValidCheckTimeStamp:(id)arg2;
- (id)lastValidCheckTimestamp;

@end
