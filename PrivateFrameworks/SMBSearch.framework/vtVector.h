
@interface vtVector : NSObject {
    NSMutableArray * _vVectorData;
    unsigned int  _vVectorElements;
}

@property (retain) NSMutableArray *vVectorData;
@property unsigned int vVectorElements;

- (void).cxx_destruct;
- (int)addElement:(id)arg1;
- (id)init;
- (void)setVVectorData:(id)arg1;
- (void)setVVectorElements:(unsigned int)arg1;
- (id)vVectorData;
- (unsigned int)vVectorElements;

@end
