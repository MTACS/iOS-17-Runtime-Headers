
@interface REMTemplateSectionContext : NSObject {
    REMTemplate * _parentTemplate;
}

@property (nonatomic, retain) REMTemplate *parentTemplate;

- (void).cxx_destruct;
- (id)initWithParentTemplate:(id)arg1;
- (id)parentTemplate;
- (void)setParentTemplate:(id)arg1;

@end
