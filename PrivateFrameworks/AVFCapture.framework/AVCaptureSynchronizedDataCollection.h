
@interface AVCaptureSynchronizedDataCollection : NSObject <NSFastEnumeration> {
    AVCaptureSynchronizedDataCollectionInternal * _internal;
}

@property (readonly) unsigned long long count;

+ (id)_shortStringForDataDroppedReason:(long long)arg1;
+ (id)_shortStringForDataOutput:(id)arg1 syncedData:(id)arg2;
+ (id)_shortStringForMetadataObjects:(id)arg1;
+ (void)initialize;

- (id)_initWithPossibleDataOutputs:(id)arg1;
- (void)_setSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)synchronizedDataForCaptureOutput:(id)arg1;

@end