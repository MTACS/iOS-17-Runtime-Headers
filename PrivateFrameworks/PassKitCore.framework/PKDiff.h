
@interface PKDiff : NSObject <NSSecureCoding> {
    NSMutableArray * _hunks;
    NSData * _passManifestHash;
    NSString * _passUniqueID;
}

@property (nonatomic, copy) NSData *passManifestHash;
@property (nonatomic, copy) NSString *passUniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_hunkIndexForKey:(id)arg1;
- (void)addHunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4;
- (void)addHunksFromDiff:(id)arg1;
- (id)anyKey;
- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateHunks:(id /* block */)arg1;
- (bool)getHunkForKey:(id)arg1 oldValue:(id*)arg2 newValue:(id*)arg3 message:(id*)arg4;
- (unsigned long long)hash;
- (long long)hunkCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDiff:(id)arg1;
- (void)key:(id*)arg1 oldValue:(id*)arg2 newValue:(id*)arg3 message:(id*)arg4 forHunkAtIndex:(long long)arg5;
- (id)passManifestHash;
- (id)passUniqueID;
- (void)removeHunkForKey:(id)arg1;
- (void)setPassManifestHash:(id)arg1;
- (void)setPassUniqueID:(id)arg1;

@end
