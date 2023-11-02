
@interface MFObjectTable : NSObject {
    unsigned int  m_maximumSize;
    NSMutableArray * m_objects;
}

@property unsigned int maximumSize;

- (void).cxx_destruct;
- (void)clear;
- (int)deleteObject:(unsigned int)arg1;
- (id)getObject:(unsigned int)arg1;
- (id)init;
- (unsigned int)insertPos;
- (unsigned int)maximumSize;
- (int)putObject:(id)arg1 in_objectPos:(unsigned int)arg2;
- (int)selectInto:(int)arg1 io_DC:(id)arg2;
- (void)setMaximumSize:(unsigned int)arg1;
- (int)size;

@end
