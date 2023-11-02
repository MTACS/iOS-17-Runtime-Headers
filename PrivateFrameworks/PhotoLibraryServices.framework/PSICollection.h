
@interface PSICollection : PSIObject <NSCopying> {
    unsigned long long  _assetsCountPrivate;
    unsigned long long  _assetsCountShared;
    PSIDate * _endDate;
    PSIAsset * _keyAssetPrivate;
    PSIAsset * _keyAssetShared;
    NSDate * _sortDate;
    PSIDate * _startDate;
    NSString * _subtitle;
    NSString * _title;
    unsigned long long  _type;
}

@property (readonly) unsigned long long assetsCountPrivate;
@property (readonly) unsigned long long assetsCountShared;
@property (readonly) PSIDate *endDate;
@property (nonatomic, copy) PSIAsset *keyAssetPrivate;
@property (nonatomic, copy) PSIAsset *keyAssetShared;
@property (readonly) NSDate *sortDate;
@property (readonly) PSIDate *startDate;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_initForCopy:(bool)arg1;
- (unsigned long long)assetsCountPrivate;
- (unsigned long long)assetsCountShared;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endDate;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAssetPrivate:(id)arg6 keyAssetShared:(id)arg7 type:(unsigned long long)arg8 assetsCountPrivate:(unsigned long long)arg9 assetsCountShared:(unsigned long long)arg10 sortDate:(id)arg11;
- (id)keyAssetPrivate;
- (id)keyAssetShared;
- (void)setKeyAssetPrivate:(id)arg1;
- (void)setKeyAssetShared:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sortDate;
- (id)startDate;
- (id)subtitle;
- (id)title;
- (unsigned long long)type;

@end
