
@interface SXDataRecordStore : NSObject {
    NSArray * _descriptors;
    NSArray * _records;
}

@property (nonatomic, readonly) NSArray *descriptors;
@property (nonatomic, readonly) NSArray *records;

- (void).cxx_destruct;
- (id)descriptors;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
- (id)initWithRecords:(id)arg1 andDescriptors:(id)arg2;
- (unsigned long long)numberOfRecords;
- (id)records;
- (id)recordsUsingSortDescriptors:(id)arg1;

@end
