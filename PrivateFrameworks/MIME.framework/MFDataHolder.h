
@interface MFDataHolder : NSObject {
    NSMutableArray * _datas;
    unsigned long long  _length;
}

@property (nonatomic, readonly) unsigned long long length;

+ (id)dataHolder;
+ (id)dataHolderWithData:(id)arg1;

- (void).cxx_destruct;
- (void)addData:(id)arg1;
- (id)data;
- (void)enumerateByteRangesUsingBlock:(id /* block */)arg1;
- (void)enumerateConvertingNewlinesUsingBlock:(id /* block */)arg1;
- (void)enumerateDatasUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (unsigned long long)length;
- (unsigned long long)numberOfNewlinesNeedingConversion:(bool)arg1;

@end
