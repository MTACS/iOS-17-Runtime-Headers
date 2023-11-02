
@interface DOMMediaList : DOMObject

@property (readonly) unsigned int length;
@property (copy) NSString *mediaText;

- (void)appendMedium:(id)arg1;
- (void)dealloc;
- (void)deleteMedium:(id)arg1;
- (id)item:(unsigned int)arg1;
- (unsigned int)length;
- (id)mediaText;
- (void)setMediaText:(id)arg1;

@end
