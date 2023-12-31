
@interface UICellHighlightingSupport : NSObject {
    id  _cell;
    struct __CFDictionary { } * _unhighlightedStates;
}

- (void).cxx_destruct;
- (void)applyState:(unsigned long long)arg1 toView:(id)arg2;
- (void)cacheState:(unsigned long long)arg1 forView:(id)arg2;
- (void)dealloc;
- (void)highlightView:(id)arg1;
- (id)initWithCell:(id)arg1;

@end
