
@interface INFNumber : INFSentenceToken {
    NSString * _identifier;
    NSNumber * _value;
}

@property (nonatomic, copy) NSNumber *value;

+ (id)numberWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)contributingSentenceContext;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)stringForContext:(id)arg1;
- (id)value;

@end
