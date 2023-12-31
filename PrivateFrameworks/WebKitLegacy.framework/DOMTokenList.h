
@interface DOMTokenList : DOMObject

@property (readonly) unsigned int length;
@property (copy) NSString *value;

- (bool)contains:(id)arg1;
- (void)dealloc;
- (id)item:(unsigned int)arg1;
- (unsigned int)length;
- (void)setValue:(id)arg1;
- (bool)toggle:(id)arg1 force:(bool)arg2;
- (id)value;

@end
