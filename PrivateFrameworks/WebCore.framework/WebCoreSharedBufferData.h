
@interface WebCoreSharedBufferData : NSData {
    struct RefPtr<const WebCore::DataSegment, WTF::RawPtrTraits<const WebCore::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::DataSegment>> { 
        struct DataSegment {} *m_ptr; 
    }  _dataSegment;
    unsigned long long  _position;
    unsigned long long  _size;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)bytes;
- (void)dealloc;
- (id)initWithDataSegment:(const void*)arg1 position:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (unsigned long long)length;

@end
