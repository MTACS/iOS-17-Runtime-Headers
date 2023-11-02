
@interface HMDBackingStoreLogRecord : NSObject {
    NSData * _data;
    long long  _encoding;
    long long  _pushed;
    CKRecordID * _root;
    long long  _rowID;
    long long  _type;
    long long  _xactID;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long encoding;
@property (nonatomic, readonly) long long pushed;
@property (nonatomic, readonly) CKRecordID *root;
@property (nonatomic, readonly) long long rowID;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long xactID;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (long long)encoding;
- (id)initWithArray:(id)arg1;
- (long long)pushed;
- (id)root;
- (long long)rowID;
- (long long)type;
- (long long)xactID;

@end
