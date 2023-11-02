
@interface PPContactRecordResultBuffer : NSObject {
    bool  _loadingComplete;
    NSMutableArray * _records;
}

@property (nonatomic) bool loadingComplete;
@property (nonatomic, readonly) NSMutableArray *records;

- (void).cxx_destruct;
- (id)init;
- (bool)loadingComplete;
- (id)records;
- (void)setLoadingComplete:(bool)arg1;

@end
