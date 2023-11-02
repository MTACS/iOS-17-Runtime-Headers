
@interface PXGComponentDataStore : NSObject {
    long long  _capacity;
    char * _data;
    unsigned long long  _elementSize;
}

@property (nonatomic) long long capacity;
@property (nonatomic, readonly) unsigned long long elementSize;

- (unsigned long long)byteSize;
- (long long)capacity;
- (const void*)contents;
- (void)dealloc;
- (unsigned long long)elementSize;
- (id)init;
- (id)initWithElementSize:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopy;
- (void)setCapacity:(long long)arg1;

@end
