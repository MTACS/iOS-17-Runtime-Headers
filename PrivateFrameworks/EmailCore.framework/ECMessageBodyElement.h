
@interface ECMessageBodyElement : NSObject <ECMessageBodyElement_Private> {
    unsigned long long  _attributes;
    unsigned long long  _externalRetainCount;
    NSArray * _nodes;
    ECMessageBodyParser * _parser;
    unsigned long long  _quoteLevel;
    unsigned long long  _validAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *nodes;
@property (nonatomic) ECMessageBodyParser *parser;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasValueForAttributes:(unsigned long long)arg1;
- (void)_setValue:(unsigned long long)arg1 forAttributes:(unsigned long long)arg2;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)getQuoteLevel;
- (id)init;
- (bool)isExternallyRetained;
- (id)nodes;
- (id)parser;
- (unsigned long long)quoteLevel;
- (void)releaseExternally;
- (void)reset;
- (id)retainExternally;
- (void)setNodes:(id)arg1;
- (void)setParser:(id)arg1;
- (unsigned long long)valueForAttributes:(unsigned long long)arg1;

@end
