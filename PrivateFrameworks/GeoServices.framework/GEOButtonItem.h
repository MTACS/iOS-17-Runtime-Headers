
@interface GEOButtonItem : NSObject {
    GEOPDButtonItem * _buttonItem;
}

@property (nonatomic, readonly) int buttonType;

+ (id)buttonItemsFromPDButtonItems:(id)arg1;

- (void).cxx_destruct;
- (int)buttonType;
- (id)debugDescription;
- (id)initWithButtonItem:(id)arg1;

@end
