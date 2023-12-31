
@interface _MKMultiPartLabelMetrics : NSObject {
    NSMutableAttributedString * _attributedString;
    NSArray * _components;
    unsigned long long  _currentSeparatorIndex;
    NSAttributedString * _originalAttributedString;
    NSArray * _separators;
}

@property (nonatomic, readonly) NSMutableAttributedString *attributedString;
@property (nonatomic, readonly, copy) NSArray *components;
@property (nonatomic) unsigned long long currentSeparatorIndex;
@property (nonatomic, readonly, copy) NSAttributedString *originalAttributedString;
@property (nonatomic, readonly, copy) NSArray *separators;

- (void).cxx_destruct;
- (bool)_shiftLocationOfStrings:(id)arg1 startingAtIndex:(unsigned long long)arg2 shiftValue:(long long)arg3;
- (id)attributedString;
- (id)components;
- (unsigned long long)currentSeparatorIndex;
- (id)initWithMultiPartString:(id)arg1;
- (id)originalAttributedString;
- (bool)replaceSeparatorAtIndex:(unsigned long long)arg1 withString:(id)arg2;
- (void)reset;
- (id)separators;
- (void)setCurrentSeparatorIndex:(unsigned long long)arg1;

@end
