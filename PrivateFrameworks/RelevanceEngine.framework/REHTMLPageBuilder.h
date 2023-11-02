
@interface REHTMLPageBuilder : NSObject {
    NSArray * _links;
    NSArray * _loadingScripts;
    REHTMLElement * _navigationLinksElement;
    NSString * _pageDescription;
    REHTMLElement * _pageDescriptionElement;
    REHTMLElement * _scriptsElement;
    NSArray * _stylesheets;
    REHTMLElement * _stylesheetsElement;
}

@property (nonatomic, retain) NSArray *links;
@property (nonatomic, retain) NSArray *loadingScripts;
@property (nonatomic, retain) NSString *pageDescription;
@property (nonatomic, retain) NSArray *stylesheets;

+ (id)_bodyElement;
+ (id)_docTypeElement;
+ (id)_headElement;
+ (id)_htmlElement;
+ (id)_iosIcon;
+ (id)_largeFavicon;
+ (id)_mainNavigationElement;
+ (id)_safariIcon;
+ (id)_scriptElementWithLocation:(id)arg1;
+ (id)_smallFavicon;
+ (id)_stylesheetElementWithLocation:(id)arg1;
+ (id)_viewportElement;

- (void).cxx_destruct;
- (id)init;
- (id)links;
- (id)loadingScripts;
- (id)pageDescription;
- (id)pageWithTitle:(id)arg1 content:(id)arg2 backLocation:(id)arg3;
- (void)setLinks:(id)arg1;
- (void)setLoadingScripts:(id)arg1;
- (void)setPageDescription:(id)arg1;
- (void)setStylesheets:(id)arg1;
- (id)stylesheets;

@end
