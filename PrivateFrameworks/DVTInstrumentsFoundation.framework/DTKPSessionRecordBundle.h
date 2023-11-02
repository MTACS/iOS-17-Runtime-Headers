
@interface DTKPSessionRecordBundle : NSObject {
    NSArray * _dataBlocks;
    DTTapMemo * _memo;
}

@property (nonatomic, copy) NSArray *dataBlocks;
@property (nonatomic, retain) DTTapMemo *memo;

- (void).cxx_destruct;
- (id)dataBlocks;
- (id)memo;
- (void)setDataBlocks:(id)arg1;
- (void)setMemo:(id)arg1;

@end
