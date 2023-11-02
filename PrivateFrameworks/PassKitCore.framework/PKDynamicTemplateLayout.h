
@interface PKDynamicTemplateLayout : NSObject {
    NSMutableDictionary * _layoutImages;
    NSMutableDictionary * _layoutLinks;
    NSMutableDictionary * _layoutStrings;
    NSString * _templateIdentifier;
}

@property (nonatomic, readonly) NSString *templateIdentifier;

- (void).cxx_destruct;
- (void)_initWithLayoutDictionary:(id)arg1;
- (id)anyLayoutImageNamed:(id)arg1;
- (id)anyLayoutLinkNamed:(id)arg1;
- (id)anyLayoutStringNamed:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)layoutImageNamed:(id)arg1 passingTest:(id /* block */)arg2;
- (id)layoutImages;
- (id)layoutLinkNamed:(id)arg1 passingTest:(id /* block */)arg2;
- (id)layoutLinks;
- (id)layoutStringNamed:(id)arg1 passingTest:(id /* block */)arg2;
- (id)layoutStrings;
- (id)templateIdentifier;

@end
