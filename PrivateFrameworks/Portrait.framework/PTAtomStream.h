
@interface PTAtomStream : NSObject {
    bool  _atEndOfStream;
    unsigned long long  _atomDataOffset;
    unsigned long long  _atomFlags;
    unsigned long long  _atomSize;
    unsigned int  _atomType;
    unsigned long long  _atomVersion;
    <PTByteStream> * _byteStream;
    bool  _didReadAtomVersionAndFlags;
    NSError * _error;
    unsigned long long  _globalAtomOffset;
    unsigned long long  _globalEndOffset;
    PTAtomStream * _parentStream;
}

@property (getter=isAtEndOfStream, readonly) bool atEndOfStream;
@property (readonly) unsigned long long atomDataOffset;
@property (readonly) unsigned long long atomDataSize;
@property (readonly) unsigned long long atomFlags;
@property (readonly) unsigned long long atomSize;
@property (readonly) unsigned int atomType;
@property (readonly) unsigned long long atomVersion;
@property (readonly) <PTByteStream> *byteStream;
@property (readonly) bool didReadAtomVersionAndFlags;
@property (readonly) NSError *error;
@property (readonly) unsigned long long globalAtomOffset;
@property (readonly) unsigned long long globalEndOffset;
@property (readonly) bool hasAtom;
@property (readonly) PTAtomStream *parentStream;

- (void).cxx_destruct;
- (void)_debugLogAtomReaderState;
- (void)_debugLogBytes:(const void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id)_errorForByteStreamError:(id)arg1;
- (id)_errorForReadPastLimit:(unsigned long long)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (void)_readAtomHeader;
- (void)_readBytes:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (void)_setEndOfStream;
- (void)_setErrorForByteStreamIfNeeded;
- (void)advanceToNextAtom;
- (unsigned long long)atomDataOffset;
- (unsigned long long)atomDataSize;
- (unsigned long long)atomFlags;
- (unsigned long long)atomSize;
- (unsigned int)atomType;
- (unsigned long long)atomVersion;
- (id)byteStream;
- (id)debugDescription;
- (bool)didReadAtomVersionAndFlags;
- (id)error;
- (unsigned long long)globalAtomDataOffset;
- (unsigned long long)globalAtomOffset;
- (unsigned long long)globalEndOffset;
- (bool)hasAtom;
- (id)initWithByteStream:(id)arg1;
- (id)initWithByteStream:(id)arg1 offset:(unsigned long long)arg2;
- (id)initWithParent:(id)arg1;
- (id)initWithParent:(id)arg1 offset:(unsigned long long)arg2;
- (bool)isAtEndOfStream;
- (id)parentStream;
- (void)readCurrentAtomDataBytes:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (void)readCurrentAtomVersionAndFlags;
- (void)setError:(id)arg1;

@end
