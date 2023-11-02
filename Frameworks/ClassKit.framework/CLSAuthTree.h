
@interface CLSAuthTree : NSObject <NSSecureCoding> {
    NSMutableDictionary * _graph;
    NSNumber * _overridingStatus;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addNode:(id)arg1 parentStatusID:(id)arg2;
- (long long)authStatusAtIdentifierPath:(id)arg1;
- (long long)authStatusFor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOverridingStatus:(long long)arg1;
- (id)initWithStatus:(long long)arg1 statusID:(id)arg2 identifier:(id)arg3;
- (void)setAuthStatus:(long long)arg1 forIdentifier:(id)arg2 statusID:(id)arg3 parentStatusID:(id)arg4;

@end
