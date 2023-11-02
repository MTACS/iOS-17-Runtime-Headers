
@interface SXQuickLookRenderer : NSObject <SXQuickLookRenderer> {
    <SXQuickLookStyler> * _styler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXQuickLookStyler> *styler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithStyler:(id)arg1;
- (void)render:(id)arg1 attributes:(id)arg2;
- (void)renderErrorMessage:(id)arg1 view:(id)arg2;
- (void)renderThumbnailImage:(id)arg1 view:(id)arg2;
- (id)styler;

@end
