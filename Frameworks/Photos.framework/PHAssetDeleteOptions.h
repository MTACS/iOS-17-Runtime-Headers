
@interface PHAssetDeleteOptions : NSObject <NSCopying> {
    long long  _expungeSource;
    bool  _shouldExpungeFromLocalStorageOnly;
}

@property (nonatomic) long long expungeSource;
@property (nonatomic) bool shouldExpungeFromLocalStorageOnly;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeToXPCDict:(id)arg1;
- (long long)expungeSource;
- (id)init;
- (id)initWithXPCDict:(id)arg1;
- (void)setExpungeSource:(long long)arg1;
- (void)setShouldExpungeFromLocalStorageOnly:(bool)arg1;
- (bool)shouldExpungeFromLocalStorageOnly;

@end
