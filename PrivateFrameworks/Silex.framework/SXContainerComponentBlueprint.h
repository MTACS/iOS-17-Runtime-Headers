
@interface SXContainerComponentBlueprint : SXComponentBlueprint {
    SXLayoutBlueprint * _layoutBlueprint;
}

@property (nonatomic, retain) SXLayoutBlueprint *layoutBlueprint;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)layoutBlueprint;
- (void)setLayoutBlueprint:(id)arg1;
- (void)setParentLayoutBlueprint:(id)arg1;

@end
