
@interface DOMOverflowEvent : DOMEvent

@property (readonly) bool horizontalOverflow;
@property (readonly) unsigned short orient;
@property (readonly) bool verticalOverflow;

- (bool)horizontalOverflow;
- (void)initOverflowEvent:(unsigned short)arg1 horizontalOverflow:(bool)arg2 verticalOverflow:(bool)arg3;
- (unsigned short)orient;
- (bool)verticalOverflow;

@end
