
@interface DEVariableArray : DEVariable

- (void)addItem:(id)arg1;
- (id)getItem:(unsigned long long)arg1;
- (unsigned long long)getLength;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithSharedPtr:(void*)arg1;

@end
