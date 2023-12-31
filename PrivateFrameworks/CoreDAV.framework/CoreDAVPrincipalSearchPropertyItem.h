
@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem {
    CoreDAVLeafItem * _descriptionItem;
    CoreDAVItem * _prop;
}

@property (nonatomic, retain) CoreDAVLeafItem *descriptionItem;
@property (nonatomic, retain) CoreDAVItem *prop;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionItem;
- (id)init;
- (id)prop;
- (void)setDescriptionItem:(id)arg1;
- (void)setProp:(id)arg1;

@end
