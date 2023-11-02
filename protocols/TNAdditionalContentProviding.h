
@protocol TNAdditionalContentProviding

@required

- (void)drawContentForAdditionalPage:(unsigned long long)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawOverlayContentForPageIndex:(unsigned long long)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawOverlayContentInContext:(struct CGContext { }*)arg1;
- (bool)hasOverlayContent;
- (bool)hasOverlayContentForPageIndex:(unsigned long long)arg1;
- (double)heightForAdditionalContent;
- (unsigned long long)numberOfAdditionalPages;

@end
