
@interface RemoteUI.RUISwiftUIContainerElement : RUIElement <RUITopLevelPageElement> {
    void childElementDirectory;
    void container;
    void objectModel;
}

+ (bool)supportsElementNamed:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (id)initWithElement:(id)arg1 parent:(id)arg2;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setObjectModel:(id)arg1;
- (id)subElementWithID:(id)arg1;
- (id)view;
- (id)viewController;

@end
