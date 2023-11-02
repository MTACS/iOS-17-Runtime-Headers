
@interface _OSLogIndexFile : NSObject <_OSLogIndexTimeRangable> {
    unsigned char  _bootu;
    unsigned long long  _cet;
    _OSLogChunkFileReference * _cfr;
    unsigned long long  _cot;
    unsigned long long  _cot_header;
    _OSLogChunkStore * _cs;
    unsigned long long  _et;
    unsigned long long  _ot;
    char * _path;
    bool  _timespanDetermined;
}

@property (nonatomic, readonly) const char *bootUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long oldestTime;
@property (nonatomic, readonly) char *path;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_determineTimespan;
- (bool)_loadCatalogMetadataForTimespan;
- (bool)_loadHeaderMetadata:(id)arg1;
- (const char *)bootUUID;
- (id)copyMappedChunkStore:(id*)arg1;
- (void)dealloc;
- (unsigned long long)endTime;
- (id)initWithChunkStore:(id)arg1 error:(id*)arg2;
- (id)initWithTraceFile:(id)arg1 error:(id*)arg2;
- (unsigned long long)oldestTime;
- (char *)path;

@end
