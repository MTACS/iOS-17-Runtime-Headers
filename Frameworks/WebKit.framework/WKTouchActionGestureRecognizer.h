
@interface WKTouchActionGestureRecognizer : UIGestureRecognizer {
    <WKTouchActionGestureRecognizerDelegate> * _touchActionDelegate;
    struct HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction>>, WTF::HashTableTraits> { 
        struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction>>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>>::KeyValuePairTraits, WTF::HashTraits<unsigned int>> { 
            union { 
                void *m_table; 
                unsigned int *m_tableForLLDB; 
            } ; 
        } m_impl; 
    }  _touchActionsByTouchIdentifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateState;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (void)clearTouchActionsForTouchIdentifier:(unsigned int)arg1;
- (id)initWithTouchActionDelegate:(id)arg1;
- (void)setTouchActions:(struct OptionSet<WebCore::TouchAction> { unsigned char x1; })arg1 forTouchIdentifier:(unsigned int)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
