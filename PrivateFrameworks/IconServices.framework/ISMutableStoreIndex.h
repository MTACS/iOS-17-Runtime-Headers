
@interface ISMutableStoreIndex : ISStoreIndex {
    unsigned long long  _initialCapacity;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly) unsigned long long initialCapacity;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (void)_extend;
- (void)_extendData;
- (bool)addValue:(const struct { unsigned char x1[16]; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; unsigned int x4; unsigned char x5[16]; unsigned char x6[16]; struct { unsigned char x_7_1_1[16]; unsigned long long x_7_1_2; unsigned char x_7_1_3[16]; } x7; }*)arg1;
- (id)data;
- (id)initWithStoreFileURL:(id)arg1 capacity:(unsigned long long)arg2;
- (unsigned long long)initialCapacity;
- (void)performBlock:(id /* block */)arg1;
- (void)removeAll;
- (bool)removeValueForUUID:(unsigned char)arg1 passingTest:(id /* block */)arg2;
- (bool)removeValuePassingTest:(id /* block */)arg1;
- (id)serialQueue;

@end
