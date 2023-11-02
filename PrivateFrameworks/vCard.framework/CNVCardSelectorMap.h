
@interface CNVCardSelectorMap : NSObject {
    NSMutableArray * _selectors;
    NSMutableArray * _strings;
}

- (void).cxx_destruct;
- (id)init;
- (SEL)selectorForString:(id)arg1;
- (void)setSelector:(SEL)arg1 forString:(id)arg2;

@end
