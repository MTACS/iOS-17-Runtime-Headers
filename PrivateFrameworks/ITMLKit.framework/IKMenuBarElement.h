
@interface IKMenuBarElement : IKCollectionElement {
    IKAppMenuBarDocument * _menuBarDocument;
}

@property (nonatomic, readonly) IKAppMenuBarDocument *menuBarDocument;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)menuBarDocument;

@end
