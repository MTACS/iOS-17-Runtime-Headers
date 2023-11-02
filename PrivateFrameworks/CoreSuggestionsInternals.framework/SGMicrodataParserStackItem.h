
@interface SGMicrodataParserStackItem : NSObject {
    SGMicrodataDocument * _document;
    NSArray * _itemScopes;
    SGMicrodataParserStackItem * _parent;
    NSArray * _textConsumers;
}

@property (readonly) SGMicrodataDocument *document;
@property (readonly) NSArray *itemScopes;
@property (readonly) SGMicrodataParserStackItem *parent;
@property (readonly) NSArray *textConsumers;

- (void).cxx_destruct;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (id)initWithParent:(id)arg1 item:(id)arg2 htmlId:(id)arg3 textConsumer:(id)arg4;
- (id)itemScopes;
- (id)parent;
- (id)textConsumers;

@end
