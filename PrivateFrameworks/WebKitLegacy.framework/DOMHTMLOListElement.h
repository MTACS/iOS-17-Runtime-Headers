
@interface DOMHTMLOListElement : DOMHTMLElement

@property bool compact;
@property int start;
@property (copy) NSString *type;

- (bool)compact;
- (bool)reversed;
- (void)setCompact:(bool)arg1;
- (void)setReversed:(bool)arg1;
- (void)setStart:(int)arg1;
- (void)setType:(id)arg1;
- (int)start;
- (id)type;

@end
