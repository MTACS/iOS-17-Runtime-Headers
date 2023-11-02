
@interface KVStreamProfileWriter : NSObject <KVProfileWriter> {
    NSOutputStream * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)addItem:(id)arg1 error:(id*)arg2;
- (bool)finishDataset:(id*)arg1;
- (bool)finishProfile:(id*)arg1;
- (id)initWithOutputStream:(id)arg1;
- (bool)startDataset:(id)arg1 error:(id*)arg2;
- (bool)startProfile:(id)arg1 error:(id*)arg2;

@end
