
@interface DOMText : DOMCharacterData

@property (readonly, copy) NSString *wholeText;

- (id)replaceWholeText:(id)arg1;
- (id)splitText:(unsigned int)arg1;
- (id)wholeText;

@end
