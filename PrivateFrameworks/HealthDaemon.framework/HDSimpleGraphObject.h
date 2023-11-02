
@interface HDSimpleGraphObject : NSObject {
    bool  _deleted;
    long long  _rowID;
    unsigned long long  _slots;
    long long  _version;
}

@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (nonatomic, readonly) long long rowID;
@property (nonatomic, readonly) unsigned long long slots;
@property (nonatomic, readonly) long long version;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRowID:(long long)arg1 version:(long long)arg2 slots:(unsigned long long)arg3 deleted:(bool)arg4;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (long long)rowID;
- (unsigned long long)slots;
- (long long)version;

@end
