
@interface fullPropSpec : NSObject {
    unsigned int  _propID;
    int  _propNumber;
    unsigned int  _ulKind;
    struct network_uuid { 
        unsigned int u1; 
        unsigned short u2; 
        unsigned short u3; 
        unsigned char u4[8]; 
    }  propGuid;
}

@property unsigned int propID;
@property int propNumber;
@property unsigned int ulKind;

- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)initWithPropertyNumber:(int)arg1;
- (unsigned int)propID;
- (int)propNumber;
- (void)setPropID:(unsigned int)arg1;
- (void)setPropNumber:(int)arg1;
- (void)setUlKind:(unsigned int)arg1;
- (unsigned int)ulKind;

@end
