
@interface WFBlockPage : NSObject {
    NSString * formActionURLString;
    NSURL * pageTemplateURL;
    NSString * preferredLanguage;
    NSString * userVisibleURLString;
}

@property (retain) NSString *formActionURLString;
@property (readonly) NSURL *pageTemplateURL;
@property (retain) NSString *userVisibleURLString;

- (id)_blockpage;
- (id)_css;
- (id)_fileContentWithName:(id)arg1 extension:(id)arg2;
- (id)_initWithUsername:(id)arg1 fileName:(id)arg2;
- (void)dealloc;
- (id)formActionURLString;
- (id)initNoOveridePageWithUsername:(id)arg1;
- (id)initWithUsername:(id)arg1 overridesAllowded:(bool)arg2;
- (id)page;
- (id)pageTemplateURL;
- (void)setFormActionURLString:(id)arg1;
- (void)setUserVisibleURLString:(id)arg1;
- (id)userVisibleURLString;

@end
