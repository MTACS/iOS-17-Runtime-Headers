
@interface IOAccelMemoryMapInfo : NSObject {
    id  _expansionData;
    unsigned long long  address;
    int  pid;
}

@property unsigned long long address;
@property int pid;

- (unsigned long long)address;
- (int)pid;
- (void)setAddress:(unsigned long long)arg1;
- (void)setPid:(int)arg1;

@end
