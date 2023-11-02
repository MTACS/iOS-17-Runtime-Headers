
@interface PPContactDiskCacheHistoryRecordSet : NSObject {
    NSMutableArray * _adds;
    NSMutableArray * _deletes;
    NSString * _filename;
    NSMutableArray * _updates;
}

@property (nonatomic, readonly) NSMutableArray *adds;
@property (nonatomic, readonly) NSMutableArray *deletes;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSMutableArray *updates;

- (void).cxx_destruct;
- (id)adds;
- (id)deletes;
- (id)filename;
- (unsigned long long)hash;
- (id)updates;

@end
