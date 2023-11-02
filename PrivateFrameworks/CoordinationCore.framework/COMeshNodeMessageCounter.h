
@interface COMeshNodeMessageCounter : NSObject {
    unsigned long long  _count;
    unsigned long long  _size;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long size;

- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
