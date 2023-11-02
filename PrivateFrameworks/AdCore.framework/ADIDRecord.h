
@interface ADIDRecord : NSObject {
    NSString * _ID;
    bool  _dirty;
    NSData * _encryptedID;
}

@property (nonatomic, retain) NSString *ID;
@property (nonatomic) bool dirty;
@property (nonatomic, retain) NSData *encryptedID;

- (void).cxx_destruct;
- (id)ID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)dirty;
- (id)encryptedID;
- (id)init;
- (id)initWithID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setEncryptedID:(id)arg1;
- (void)setID:(id)arg1;

@end
