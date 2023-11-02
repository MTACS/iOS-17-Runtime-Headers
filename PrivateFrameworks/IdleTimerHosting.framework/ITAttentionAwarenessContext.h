
@interface ITAttentionAwarenessContext : NSObject <NSCopying> {
    NSUUID * _identifier;
}

@property (nonatomic, readonly, copy) NSUUID *identifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
