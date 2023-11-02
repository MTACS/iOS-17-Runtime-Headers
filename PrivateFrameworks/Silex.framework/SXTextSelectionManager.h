
@interface SXTextSelectionManager : NSObject <SXTextSelectionManager> {
    NSHashTable * _textSelecting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *selectedText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSHashTable *textSelecting;

- (void).cxx_destruct;
- (void)addTextSelecting:(id)arg1;
- (void)clearSelection;
- (id)init;
- (id)selectedText;
- (id)textSelecting;

@end
