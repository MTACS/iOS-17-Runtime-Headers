
@interface PTAtomWriter : NSObject {
    unsigned long long  _atomDataOffset;
    unsigned long long  _atomSize;
    unsigned int  _atomType;
    <PTByteWriter> * _byteWriter;
    bool  _didBeginAtom;
    NSError * _error;
    unsigned long long  _globalAtomOffset;
    PTAtomWriter * _parentWriter;
}

@property (readonly) unsigned long long atomDataOffset;
@property (readonly) unsigned long long atomDataSize;
@property (readonly) unsigned long long atomSize;
@property (readonly) unsigned int atomType;
@property (readonly) <PTByteWriter> *byteWriter;
@property (readonly) bool didBeginAtom;
@property (readonly) NSError *error;
@property (readonly) unsigned long long globalAtomDataOffset;
@property (readonly) unsigned long long globalAtomOffset;
@property (readonly) PTAtomWriter *parentWriter;

- (void).cxx_destruct;
- (void)_appendBytes:(const void*)arg1 size:(unsigned long long)arg2;
- (void)_debugLogAtomWriterState;
- (void)_debugLogBytes:(const void*)arg1 size:(unsigned long long)arg2;
- (void)_debugLogBytes:(const void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id)_errorForByteWriterError:(id)arg1;
- (id)_errorForSize:(unsigned long long)arg1;
- (id)_errorForVersion:(unsigned long long)arg1;
- (void)_setErrorForByteWriterIfNeeded;
- (void)_writeBytes:(const void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (void)appendBytes:(const void*)arg1 size:(unsigned long long)arg2;
- (void)appendVersion:(unsigned long long)arg1 flags:(unsigned long long)arg2;
- (unsigned long long)atomDataOffset;
- (unsigned long long)atomDataSize;
- (unsigned long long)atomSize;
- (unsigned int)atomType;
- (void)beginAtomOfType:(unsigned int)arg1;
- (id)byteWriter;
- (id)debugDescription;
- (bool)didBeginAtom;
- (void)endAtom;
- (id)error;
- (unsigned long long)globalAtomDataOffset;
- (unsigned long long)globalAtomOffset;
- (id)initWithByteWriter:(id)arg1;
- (id)initWithParent:(id)arg1;
- (id)parentWriter;
- (void)setError:(id)arg1;

@end
