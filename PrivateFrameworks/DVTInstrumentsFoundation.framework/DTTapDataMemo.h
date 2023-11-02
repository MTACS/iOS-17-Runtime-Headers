
@interface DTTapDataMemo : DTTapMemo {
    bool  _finalMemo;
    bool  _supportsPeek;
}

@property (nonatomic) bool finalMemo;
@property (nonatomic) bool supportsPeek;

- (bool)finalMemo;
- (void)setFinalMemo:(bool)arg1;
- (void)setSupportsPeek:(bool)arg1;
- (bool)supportsPeek;

@end
