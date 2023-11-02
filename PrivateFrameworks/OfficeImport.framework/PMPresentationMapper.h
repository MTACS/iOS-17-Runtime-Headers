
@interface PMPresentationMapper : CMDocumentMapper <CMMapperRoot> {
    OIXMLElement * mBodyElement;
    unsigned int  mCurrentSlide;
    bool  mHasPushedFirstSlides;
    unsigned int  mNextCommit;
    NSString * mResourceUrlPrefix;
    NSString * mResourceUrlProtocol;
    NSMutableArray * mSlideGuids;
    NSMutableArray * mSlideNames;
    int  mWidth;
    OIXMLDocument * mXhtmlDoc;
}

@property (readonly) PDPresentation *document;

- (void).cxx_destruct;
- (void)_pushEmptySlideWithMessage:(id)arg1;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)defaultStyleSheet;
- (id)documentTitle;
- (void)finishMappingWithState:(id)arg1;
- (id)initWithDocument:(id)arg1 archiver:(id)arg2;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(bool)arg4;
- (struct CGSize { double x1; double x2; })pageSizeForDevice;
- (struct CGSize { double x1; double x2; })pageSizeForDeviceIncludingMargins:(bool)arg1;
- (void)setHtmlDocumentSizeInArchiver;
- (struct CGSize { double x1; double x2; })slideSize;
- (void)startMappingWithState:(id)arg1;

@end
