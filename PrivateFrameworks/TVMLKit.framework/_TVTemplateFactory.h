
@interface _TVTemplateFactory : NSObject {
    NSBundle * _tvmlKitBundle;
}

- (void).cxx_destruct;
- (void)_registerCustomAnimators;
- (void)_registerStyleSheet:(id)arg1 forTemplate:(id)arg2 parentStyleSheets:(id)arg3;
- (void)_registerTemplateControllers;
- (id)init;
- (void)registerProductTemplateURL:(id)arg1 forTemplateName:(id)arg2 includeParentStyleSheets:(bool)arg3;

@end
