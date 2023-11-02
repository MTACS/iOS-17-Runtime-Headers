
@interface _LSQuery : NSObject <NSCopying, NSSecureCoding> {
    bool  _legacy;
}

@property (getter=isLegacy, nonatomic) bool legacy;

+ (bool)supportsSecureCoding;

- (bool)_canResolveLocallyWithoutMappingDatabase;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (id)_init;
- (bool)_remoteResolutionIsExpensive;
- (bool)_requiresDatabaseMappingEntitlement;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLegacy;
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)arg1 error:(id*)arg2;
- (void)setLegacy:(bool)arg1;

@end
