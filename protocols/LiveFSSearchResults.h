
@protocol LiveFSSearchResults

@required

- (void)addSearchResult:(NSString *)arg1 attributes:(struct _LIFileAttributes { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; struct timespec { long long x_14_1_1; long long x_14_1_2; } x14; struct timespec { long long x_15_1_1; long long x_15_1_2; } x15; struct timespec { long long x_16_1_1; long long x_16_1_2; } x16; struct timespec { long long x_17_1_1; long long x_17_1_2; } x17; struct timespec { long long x_18_1_1; long long x_18_1_2; } x18; struct timespec { long long x_19_1_1; long long x_19_1_2; } x19; unsigned int x20; unsigned int x21; }*)arg2 attributeSize:(unsigned int)arg3 xAttrs:(NSDictionary *)arg4;
- (void)replenishCredits:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)tokenDone:(int)arg1;

@end
