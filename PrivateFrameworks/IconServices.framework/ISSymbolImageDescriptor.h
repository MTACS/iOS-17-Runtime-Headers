
@interface ISSymbolImageDescriptor : IFSymbolImageDescriptor <ISImageDescriptor> {
    unsigned long long  _size;
    long long  _weight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long size;
@property (readonly) Class superclass;
@property (nonatomic) long long weight;

- (void)setSize:(unsigned long long)arg1;
- (void)setWeight:(long long)arg1;
- (unsigned long long)size;
- (long long)weight;

@end
