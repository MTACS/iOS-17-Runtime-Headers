
@interface TSKAnnotationAuthorTextHighlightColorProvider : NSObject <TSKCGColorProvider> {
    TSKAnnotationAuthor * mAnnotationAuthor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct CGColor { }*)cgColor;
- (void)dealloc;
- (id)initWithAnnotationAuthor:(id)arg1;

@end
