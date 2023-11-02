
@interface _SFCredentialIdentityTypeMatcher : NSObject {
    bool  _matchAllTypes;
    long long  _typeToMatch;
}

@property (nonatomic, readonly) bool matchAllTypes;
@property (nonatomic, readonly) long long typeToMatch;

+ (id)allTypes;
+ (id)singleType:(long long)arg1;

- (bool)matchAllTypes;
- (long long)typeToMatch;

@end
