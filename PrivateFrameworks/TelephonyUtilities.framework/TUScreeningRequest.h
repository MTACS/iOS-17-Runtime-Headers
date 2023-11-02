
@interface TUScreeningRequest : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSUUID * _callUUID;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, retain) NSUUID *callUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)callUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTUCallUpdate:(id)arg1;
- (void)setCallUUID:(id)arg1;
- (void)setUUID:(id)arg1;

@end
