
@interface SRFrameStore : NSObject <NSFastEnumeration> {
    NSFileHandle * _backingFile;
    unsigned int  _datastoreVersion;
    SRMemoryMapping * _frames;
    SRMemoryMapping * _header;
    double  _lastAbsoluteTimestamp;
    unsigned long long  _permission;
    NSString * _segmentName;
}

+ (void)initialize;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;

@end
