
@interface TIAlignedTokens : NSObject {
    NSString * _source;
    NSString * _sourceTransliteration;
    NSString * _target;
}

@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *sourceTransliteration;
@property (nonatomic, copy) NSString *target;

- (void).cxx_destruct;
- (void)setSource:(id)arg1;
- (void)setSourceTransliteration:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)source;
- (id)sourceTransliteration;
- (id)target;

@end
