
@interface SUUIIndexBarEntryViewElement : SUUIViewElement {
    NSString * _targetIndexBarEntryID;
    long long  _visibilityPriority;
}

@property (nonatomic, readonly) SUUIViewElement *childElement;
@property (nonatomic, readonly, copy) NSString *targetIndexBarEntryID;
@property (nonatomic, readonly) long long visibilityPriority;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)childElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)targetIndexBarEntryID;
- (long long)visibilityPriority;

@end
