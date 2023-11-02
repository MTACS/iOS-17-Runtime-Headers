
@interface ESDObject : NSObject {
    struct EshObject { int (**x1)(); unsigned short x2; } * mEshObject;
    bool  mIsChart;
    ESDContainer * mParent;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void*)eshGroup;
- (struct EshObject { int (**x1)(); unsigned short x2; }*)eshObject;
- (void*)eshShape;
- (id)initForExcelBinaryWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (id)initFromReader:(struct OcReader { int (**x1)(); struct EshObjectFactory {} *x2; }*)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;
- (id)initPBWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (id)initWithEshObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1;
- (id)initWithType:(unsigned short)arg1;
- (bool)isChart;
- (id)parent;
- (void)setChart:(bool)arg1;
- (int)shapeID;
- (void)writeToWriter:(struct OcWriter { int (**x1)(); }*)arg1;

@end
