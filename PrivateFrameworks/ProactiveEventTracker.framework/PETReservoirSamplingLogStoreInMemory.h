
@interface PETReservoirSamplingLogStoreInMemory : NSObject <PETReservoirSamplingLogStore> {
    NSMutableData * _data;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)appendData:(id)arg1 andReturnMapPointer:(struct { /* ? */ }**)arg2;
- (bool)attemptToRecreate;
- (bool)changeLength:(unsigned long long)arg1;
- (unsigned long long)currentLength;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct chunk_s { unsigned int x_5_1_1; unsigned int x_5_1_2; } x5[0]; }*)headerMap:(unsigned long long*)arg1;
- (id)init;
- (bool)lock;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct chunk_s { unsigned int x_5_1_1; unsigned int x_5_1_2; } x5[0]; }*)remap:(unsigned long long*)arg1;
- (void)unlock;

@end