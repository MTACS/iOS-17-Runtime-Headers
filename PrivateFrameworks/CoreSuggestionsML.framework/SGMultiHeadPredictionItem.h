
@interface SGMultiHeadPredictionItem : NSObject {
    NSString * _label;
    NSNumber * _score;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSNumber *score;

- (void).cxx_destruct;
- (id)initWithScore:(id)arg1 label:(id)arg2;
- (id)label;
- (id)score;

@end
