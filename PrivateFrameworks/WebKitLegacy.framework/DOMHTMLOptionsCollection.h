
@interface DOMHTMLOptionsCollection : DOMObject

@property unsigned int length;
@property int selectedIndex;

- (void)add:(id)arg1 index:(unsigned int)arg2;
- (void)dealloc;
- (id)item:(unsigned int)arg1;
- (unsigned int)length;
- (id)namedItem:(id)arg1;
- (void)remove:(unsigned int)arg1;
- (int)selectedIndex;
- (void)setLength:(unsigned int)arg1;
- (void)setSelectedIndex:(int)arg1;

@end
