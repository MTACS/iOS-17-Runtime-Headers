
@interface STStorage : STSStgObject {
    struct _Storage { } * m_pCStorage;
}

- (void)close;
- (void)dealloc;
- (int)getChildType:(id)arg1;
- (id)getChildrenInfo;
- (id)getInfo;
- (id)init;
- (id)initWithCStorage:(struct _Storage { }*)arg1;
- (id)openStorage:(id)arg1 withMode:(int)arg2;
- (id)openStream:(id)arg1 withMode:(int)arg2;
- (void)setClass:(struct { unsigned int x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; })arg1;

@end
