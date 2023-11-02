
@interface RemoteUI.RUISwiftUITableViewRow : RUITableViewRow {
    void $__lazy_storage_$_remoteLoader;
    void cell;
    void loadedXML;
    void remoteState;
    void subscription;
    void xmlElement;
}

@property (nonatomic) bool selected;
@property (nonatomic, retain) RUIXMLElement *xmlElement;

- (void).cxx_destruct;
- (void)didBecomeDeselected;
- (void)didBecomeSelected;
- (id)init;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (bool)isSelected;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setXmlElement:(id)arg1;
- (id)tableCell;
- (id)xmlElement;

@end
