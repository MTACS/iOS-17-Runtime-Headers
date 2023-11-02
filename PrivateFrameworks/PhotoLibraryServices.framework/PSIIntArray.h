
@interface PSIIntArray : NSObject {
    struct sqlite3_intarray { } * _elementArray;
    long long * _elementBuffer;
    unsigned long long  _elementBufferSize;
    bool  _freeOnUnprepare;
    long long  _staticElementBuffer;
}

@property (nonatomic, readonly) long long*elementBuffer;

- (void)_prepareForNumberOfElements:(unsigned long long)arg1;
- (void)_unprepare;
- (void)bindElements:(struct __CFSet { }*)arg1;
- (void)bindElements:(const long long*)arg1 numberOfElements:(unsigned long long)arg2;
- (void)bindElements:(struct __CFArray { }*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)dealloc;
- (long long*)elementBuffer;
- (id)initWithLabel:(id)arg1 database:(struct sqlite3 { }*)arg2;
- (void)prepareForNumberOfElements:(unsigned long long)arg1;
- (void)unbind;
- (void)unprepare;

@end
