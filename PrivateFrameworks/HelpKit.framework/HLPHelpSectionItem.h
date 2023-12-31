
@interface HLPHelpSectionItem : HLPHelpItem {
    NSArray * _children;
    bool  _open;
}

@property (nonatomic, copy) NSArray *children;
@property (getter=isOpen, nonatomic) bool open;

- (void).cxx_destruct;
- (id)children;
- (id)debugDescription;
- (bool)isOpen;
- (void)setChildren:(id)arg1;
- (void)setOpen:(bool)arg1;

@end
