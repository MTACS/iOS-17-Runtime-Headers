
@interface VGMLFloatIOData : VGMLIOData {
    NSData * _data;
}

@property (nonatomic, readonly) NSData *data;

- (void).cxx_destruct;
- (id)data;
- (const float*)getData;
- (unsigned long long)getSize;
- (id)initWithData:(id)arg1;
- (id)initWithSize:(unsigned long long)arg1 withData:(const float*)arg2;
- (bool)isEqual:(id)arg1;

@end
