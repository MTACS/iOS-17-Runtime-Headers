
@interface LNConditionallyEnabledSystemProtocolMetadata : NSObject <LNSystemProtocolMetadata, NSCopying, NSSecureCoding> {
    bool  _persistState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool persistState;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistState:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (bool)persistState;

@end
