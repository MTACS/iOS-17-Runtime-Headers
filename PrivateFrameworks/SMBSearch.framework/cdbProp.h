
@interface cdbProp : NSObject {
    unsigned int  _colidEKind;
    unsigned int  _colidULID;
    unsigned int  _dbPropId;
    unsigned int  _dbPropOptions;
    unsigned int  _dbPropStatus;
    struct network_uuid { 
        unsigned int u1; 
        unsigned short u2; 
        unsigned short u3; 
        unsigned char u4[8]; 
    }  colidGuid;
}

@property unsigned int colidEKind;
@property unsigned int colidULID;
@property unsigned int dbPropId;
@property unsigned int dbPropOptions;
@property unsigned int dbPropStatus;

- (unsigned int)colidEKind;
- (unsigned int)colidULID;
- (unsigned int)dbPropId;
- (unsigned int)dbPropOptions;
- (unsigned int)dbPropStatus;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)initWithPropID:(unsigned int)arg1;
- (void)setColidEKind:(unsigned int)arg1;
- (void)setColidULID:(unsigned int)arg1;
- (void)setDbPropId:(unsigned int)arg1;
- (void)setDbPropOptions:(unsigned int)arg1;
- (void)setDbPropStatus:(unsigned int)arg1;
- (void)setTimeMidGuid;

@end
