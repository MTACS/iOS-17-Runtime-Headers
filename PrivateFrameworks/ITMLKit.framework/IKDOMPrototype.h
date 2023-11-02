
@interface IKDOMPrototype : IKDOMConditional {
    struct { 
        bool parsedGrouping; 
    }  _flags;
    NSArray * _grouping;
    _IKDOMPrototypeDerivationRules * _rules;
    NSString * _selector;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSArray *grouping;
@property (nonatomic, readonly, copy) _IKDOMPrototypeDerivationRules *rules;
@property (nonatomic, readonly, copy) NSString *selector;
@property (nonatomic, readonly, copy) NSString *type;

+ (id)_groupingForDOMElement:(id)arg1;
+ (id)prototypeWithDOMElement:(id)arg1;

- (void).cxx_destruct;
- (id)_derivativeWithDataItem:(id)arg1;
- (id)grouping;
- (id)initWithDOMElement:(id)arg1 selector:(id)arg2;
- (id)instantiateDOMElement;
- (id)rules;
- (id)selector;
- (id)type;
- (id)variantForDataItem:(id)arg1;

@end
