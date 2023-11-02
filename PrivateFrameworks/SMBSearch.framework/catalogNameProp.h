
@interface catalogNameProp : NSObject <WspPropertyProtocol> {
    cdbProp * _cProps;
    cbaseVariant * _variant;
}

@property (retain) cdbProp *cProps;
@property (retain) cbaseVariant *variant;

- (void).cxx_destruct;
- (id)cProps;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)initWithCatName:(id)arg1 UseExtBTypes:(bool)arg2;
- (unsigned int)propertyID;
- (void)setCProps:(id)arg1;
- (void)setVariant:(id)arg1;
- (id)variant;

@end
