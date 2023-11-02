
@interface CKAtomProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (nonatomic, readonly) unsigned long long size;

- (unsigned char)atomBehavior;
- (unsigned long long)atomType;
- (void)copyValueBytes:(void*)arg1 length:(unsigned long long*)arg2 isNull:(bool*)arg3;
- (id)location;
- (id)references;
- (unsigned long long)size;
- (id)timestamp;
- (id)value;
- (unsigned long long)valueSize;
- (unsigned long long)version;

@end
