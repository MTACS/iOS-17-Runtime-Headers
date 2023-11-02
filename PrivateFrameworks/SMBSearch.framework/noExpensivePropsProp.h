
@interface noExpensivePropsProp : NSObject <WspPropertyProtocol> {
    cdbProp * _cProps;
    cbaseVariant * _variant;
}

@property (retain) cdbProp *cProps;
@property (retain) cbaseVariant *variant;

- (void).cxx_destruct;
- (id)cProps;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)initWithBool:(bool)arg1;
- (unsigned int)propertyID;
- (void)setCProps:(id)arg1;
- (void)setVariant:(id)arg1;
- (id)variant;

@end
