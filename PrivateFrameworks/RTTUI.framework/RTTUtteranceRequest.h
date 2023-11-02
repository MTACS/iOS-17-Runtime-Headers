
@interface RTTUtteranceRequest : NSObject {
    TUCall * _call;
    NSIndexPath * _cellIndexPath;
    unsigned long long  _index;
    NSString * _string;
}

@property (nonatomic, retain) TUCall *call;
@property (nonatomic) NSIndexPath *cellIndexPath;
@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) NSString *string;

+ (id)utteranceRequestWithIndex:(unsigned long long)arg1 forString:(id)arg2 inCellPath:(id)arg3 call:(id)arg4;

- (void).cxx_destruct;
- (id)call;
- (id)cellIndexPath;
- (id)description;
- (unsigned long long)index;
- (void)setCall:(id)arg1;
- (void)setCellIndexPath:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
