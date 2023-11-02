
@interface PPFixup49995922Tuple : NSObject <NSCopying> {
    NSUUID * _dkUUID;
    NSObject * _record;
    long long  _rowid;
}

@property (nonatomic, readonly) NSUUID *dkUUID;
@property (nonatomic, readonly) NSObject *record;
@property (nonatomic, readonly) long long rowid;

+ (id)tupleWithRowid:(long long)arg1 record:(id)arg2 dkUUID:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dkUUID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRowid:(long long)arg1 record:(id)arg2 dkUUID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTuple:(id)arg1;
- (id)record;
- (long long)rowid;

@end
