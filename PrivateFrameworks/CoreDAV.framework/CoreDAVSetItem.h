
@interface CoreDAVSetItem : CoreDAVItem {
    CoreDAVItem * _prop;
}

@property (nonatomic, retain) CoreDAVItem *prop;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)prop;
- (void)setProp:(id)arg1;

@end
