
@interface ESDObjectFactory : NSObject {
    struct EshObjectFactory { int (**x1)(); bool x2; } * eshObjectFactory;
    NSMutableArray * eshObjectFactoryStack;
}

+ (id)threadLocalFactory;

- (void).cxx_destruct;
- (struct EshObject { int (**x1)(); unsigned short x2; }*)createObjectWithType:(unsigned short)arg1;
- (struct EshObject { int (**x1)(); unsigned short x2; }*)createObjectWithType:(unsigned short)arg1 version:(unsigned short)arg2;
- (void)dealloc;
- (id)init;
- (void)replaceHostEshFactoryWith:(struct EshObjectFactory { int (**x1)(); bool x2; }*)arg1;
- (void)restoreHostEshFactory;
- (void)setEshFactory:(struct EshObjectFactory { int (**x1)(); bool x2; }*)arg1;

@end
