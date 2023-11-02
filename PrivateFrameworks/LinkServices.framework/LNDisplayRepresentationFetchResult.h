
@interface LNDisplayRepresentationFetchResult : NSObject <NSCopying, NSSecureCoding> {
    LNAction * _action;
    LNDisplayRepresentation * _displayRepresentation;
    NSError * _error;
}

@property (nonatomic, readonly, copy) LNAction *action;
@property (nonatomic, readonly, copy) LNDisplayRepresentation *displayRepresentation;
@property (nonatomic, readonly, copy) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)initWithAction:(id)arg1 displayRepresentation:(id)arg2 error:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
