
@interface WMTableColumnInfo : NSObject {
    NSMutableArray * mStopArray;
}

- (void).cxx_destruct;
- (unsigned int)columnSpan:(float)arg1 at:(unsigned int)arg2;
- (unsigned long long)count;
- (id)initWithStopArray:(id)arg1;
- (void)mergeStopArray:(id)arg1;
- (float)stopAt:(unsigned int)arg1;

@end
