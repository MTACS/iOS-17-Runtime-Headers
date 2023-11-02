
@interface wspPropertySet : NSObject {
    NSMutableArray * _propArr;
    int  _propsetID;
    struct network_uuid { 
        unsigned int u1; 
        unsigned short u2; 
        unsigned short u3; 
        unsigned char u4[8]; 
    }  propSetGuid;
}

@property (retain) NSMutableArray *propArr;
@property int propsetID;

- (void).cxx_destruct;
- (void)addProperty:(id)arg1;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)initWithPropSetID:(int)arg1;
- (id)propArr;
- (unsigned long long)propertyCount;
- (id)propertyForPropID:(unsigned int)arg1;
- (int)propsetID;
- (void)setPropArr:(id)arg1;
- (void)setPropsetID:(int)arg1;

@end
