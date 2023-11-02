
@interface PSICollectionResult : NSObject <NSCopying> {
    unsigned long long  _assetsCountPrivate;
    unsigned long long  _assetsCountShared;
    PSIDate * _endDate;
    NSString * _keyAssetUUIDPrivate;
    NSString * _keyAssetUUIDShared;
    NSDate * _sortDate;
    PSIDate * _startDate;
    NSString * _subtitle;
    NSString * _title;
    unsigned long long  _type;
    NSString * _uuid;
}

@property (nonatomic, readonly) unsigned long long assetsCountPrivate;
@property (nonatomic, readonly) unsigned long long assetsCountShared;
@property (nonatomic, readonly) PSIDate *endDate;
@property (nonatomic, readonly, copy) NSString *keyAssetUUIDPrivate;
@property (nonatomic, readonly, copy) NSString *keyAssetUUIDShared;
@property (nonatomic, readonly, copy) NSDate *sortDate;
@property (nonatomic, readonly) PSIDate *startDate;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSString *uuid;

- (void).cxx_destruct;
- (unsigned long long)assetsCountPrivate;
- (unsigned long long)assetsCountShared;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endDate;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAssetUUIDPrivate:(id)arg6 keyAssetUUIDShared:(id)arg7 type:(unsigned long long)arg8 assetsCountPrivate:(unsigned long long)arg9 assetsCountShared:(unsigned long long)arg10 sortDate:(id)arg11;
- (id)keyAssetUUIDPrivate;
- (id)keyAssetUUIDShared;
- (id)sortDate;
- (id)startDate;
- (id)subtitle;
- (id)title;
- (unsigned long long)type;
- (id)uuid;

@end
