
@interface WBSRecentlyUsedAutoFillSet : NSObject {
    NSArray * _fillMatches;
    NSString * _label;
    NSArray * _skipMatches;
}

@property (nonatomic, readonly, copy) NSArray *fillMatches;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSArray *skipMatches;

- (void).cxx_destruct;
- (id)fillMatches;
- (id)initWithFillMatches:(id)arg1 skipMatches:(id)arg2 label:(id)arg3;
- (id)label;
- (id)skipMatches;

@end
