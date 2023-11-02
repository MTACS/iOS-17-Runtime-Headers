
@interface UPResultLeafNode : UPResultNode {
    NSString * _semanticValue;
    NSString * _text;
}

@property (readonly, copy) NSString *semanticValue;
@property (readonly, copy) NSString *text;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)initWithLabel:(id)arg1 andText:(id)arg2 andSemanticValue:(id)arg3;
- (id)semanticValue;
- (id)text;

@end
