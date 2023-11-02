
@interface TRILockedFactorPackSet : NSObject <NSCopying> {
    NSString<TRIFactorPackSetId> * _factorPackSetId;
    TRIReferenceManagedDirReaderLock * _lock;
    NSString * _path;
}

@property (nonatomic, readonly) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (nonatomic, readonly) TRIReferenceManagedDirReaderLock *lock;
@property (nonatomic, readonly) NSString *path;

+ (id)lockedSetWithFactorPackSetId:(id)arg1 path:(id)arg2 lock:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithReplacementFactorPackSetId:(id)arg1;
- (id)copyWithReplacementLock:(id)arg1;
- (id)copyWithReplacementPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)factorPackSetId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFactorPackSetId:(id)arg1 path:(id)arg2 lock:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLockedSet:(id)arg1;
- (id)lock;
- (id)path;

@end
