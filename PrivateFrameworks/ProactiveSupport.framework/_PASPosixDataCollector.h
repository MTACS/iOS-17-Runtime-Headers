
@interface _PASPosixDataCollector : NSObject {
    NSMutableArray * _chunks;
    unsigned long long  _totalBytes;
}

@property (nonatomic, readonly) id /* block */ handleData;

- (void).cxx_destruct;
- (id)allData;
- (id /* block */)handleData;

@end
