
@interface FBWorkspaceConnectionsState : NSObject <NSCopying, NSMutableCopying> {
    NSMutableIndexSet * _pidSet;
}

@property (nonatomic, readonly, copy) NSSet *processIdentifiers;
@property (nonatomic, readonly) unsigned long long serializedDataLength;

+ (id)deserializeLength:(out unsigned long long*)arg1 fromReader:(id /* block */)arg2;
+ (unsigned long long)minimumSerializedDataLength;

- (void).cxx_destruct;
- (id)_initWithIndexSet:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)processIdentifiers;
- (long long)serializeToWriter:(id /* block */)arg1;
- (unsigned long long)serializedDataLength;

@end
