
@interface CKDAnonymousZoneDataObject : NSObject {
    int  _changeType;
    int  _deleteType;
    NSData * _encryptedTupleData;
}

@property (nonatomic, readonly) int changeType;
@property (nonatomic, readonly) int deleteType;
@property (nonatomic, readonly, copy) NSData *encryptedTupleData;

- (void).cxx_destruct;
- (int)changeType;
- (int)deleteType;
- (id)encryptedTupleData;
- (id)initWithEncryptedData:(id)arg1;
- (id)initWithEncryptedData:(id)arg1 changeType:(int)arg2 deleteType:(int)arg3;

@end
