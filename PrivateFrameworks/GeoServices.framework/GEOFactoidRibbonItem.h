
@interface GEOFactoidRibbonItem : NSObject {
    GEOPDFactoidRibbonItem * _factoidItem;
}

@property (nonatomic, readonly) int indexWithinFactoidComponent;

- (void).cxx_destruct;
- (int)indexWithinFactoidComponent;
- (id)initWithFactoidRibbonItem:(id)arg1;

@end
