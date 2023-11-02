
@interface FCJSONRecordSourceSchema : NSObject <NSCopying> {
    NSArray * _allKeys;
    NSArray * _alwaysLocalizedKeys;
    NSArray * _keys;
    NSArray * _localizableKeys;
    NSString * _recordIDPrefix;
    NSString * _recordType;
}

@property (nonatomic, readonly, copy) NSArray *allKeys;
@property (nonatomic, readonly, copy) NSArray *alwaysLocalizedKeys;
@property (nonatomic, readonly, copy) NSArray *keys;
@property (nonatomic, readonly, copy) NSArray *localizableKeys;
@property (nonatomic, readonly, copy) NSString *recordIDPrefix;
@property (nonatomic, readonly, copy) NSString *recordType;

- (void).cxx_destruct;
- (id)allKeys;
- (id)alwaysLocalizedKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRecordType:(id)arg1 recordIDPrefix:(id)arg2 keys:(id)arg3 localizableKeys:(id)arg4;
- (id)initWithRecordType:(id)arg1 recordIDPrefix:(id)arg2 keys:(id)arg3 localizableKeys:(id)arg4 alwaysLocalizedKeys:(id)arg5;
- (id)keys;
- (id)localizableKeys;
- (id)recordIDPrefix;
- (id)recordType;

@end
