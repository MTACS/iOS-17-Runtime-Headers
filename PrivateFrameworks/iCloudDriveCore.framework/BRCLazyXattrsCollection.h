
@interface BRCLazyXattrsCollection : NSObject {
    long long  _cacheSize;
    NSMutableDictionary * _cachedXattrs;
    unsigned int  _contentXattrCount;
    int  _fd;
    long long  _sizeLimit;
    unsigned int  _xattrCount;
    NSMutableData * _xattrNamesData;
    NSMutableData * _xattrNamesList;
}

- (void).cxx_destruct;
- (void)clearCache;
- (const char **)contentXattrNamesBegin;
- (unsigned int)contentXattrNamesCount;
- (const char **)contentXattrNamesEnd;
- (id)getXattrValue:(id)arg1 error:(id*)arg2;
- (id)initWithFD:(int)arg1 sizeLimit:(long long)arg2 syncable:(bool)arg3 error:(id*)arg4;
- (const char **)structuralXattrNamesBegin;
- (unsigned int)structuralXattrNamesCount;
- (const char **)structuralXattrNamesEnd;
- (const char **)xattrNamesBegin;
- (unsigned int)xattrNamesCount;
- (const char **)xattrNamesEnd;
- (const char *)xattrNamesListBegin;
- (const char *)xattrNamesListEnd;

@end
