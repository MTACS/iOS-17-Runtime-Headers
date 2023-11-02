
@interface __VMULeaksMarkerObject : NSObject {
    unsigned int  _entryIndex;
    struct { unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; } * _region;
}

@property (nonatomic) unsigned int entryIndex;
@property (nonatomic) struct { unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; }*region;

- (void)dealloc;
- (unsigned int)entryIndex;
- (struct { unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; }*)region;
- (void)setEntryIndex:(unsigned int)arg1;
- (void)setRegion:(struct { unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; }*)arg1;

@end
