
@interface DOMHTMLMarqueeElement : DOMHTMLElement

- (id)behavior;
- (id)bgColor;
- (id)direction;
- (id)height;
- (unsigned int)hspace;
- (int)loop;
- (unsigned int)scrollAmount;
- (unsigned int)scrollDelay;
- (void)setBehavior:(id)arg1;
- (void)setBgColor:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setHspace:(unsigned int)arg1;
- (void)setLoop:(int)arg1;
- (void)setScrollAmount:(unsigned int)arg1;
- (void)setScrollDelay:(unsigned int)arg1;
- (void)setTrueSpeed:(bool)arg1;
- (void)setVspace:(unsigned int)arg1;
- (void)setWidth:(id)arg1;
- (void)start;
- (void)stop;
- (bool)trueSpeed;
- (unsigned int)vspace;
- (id)width;

@end
