
@interface BSMachServiceAliases : NSObject <NSCopying, NSMutableCopying> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_aliases;
    NSString * _lock_encoded;
    bool  _mutable;
}

@property (nonatomic, readonly, copy) NSDictionary *environmentRepresentation;

+ (id)environmentAliases;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)environmentRepresentation;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)resolveMachService:(id)arg1;

@end
