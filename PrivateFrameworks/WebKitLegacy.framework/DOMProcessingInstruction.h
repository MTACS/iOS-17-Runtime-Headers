
@interface DOMProcessingInstruction : DOMCharacterData

@property (readonly) DOMStyleSheet *sheet;
@property (readonly, copy) NSString *target;

- (id)sheet;
- (id)target;

@end
