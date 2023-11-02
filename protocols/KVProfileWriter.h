
@protocol KVProfileWriter <NSObject>

@required

+ (id)new;

- (bool)addItem:(KVItem *)arg1 error:(id*)arg2;
- (bool)finishDataset:(id*)arg1;
- (bool)finishProfile:(id*)arg1;
- (id)init;
- (id)initWithOutputStream:(NSOutputStream *)arg1;
- (bool)startDataset:(KVDatasetInfo *)arg1 error:(id*)arg2;
- (bool)startProfile:(KVProfileInfo *)arg1 error:(id*)arg2;

@end
