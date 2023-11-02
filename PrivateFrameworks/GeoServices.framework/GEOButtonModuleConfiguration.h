
@interface GEOButtonModuleConfiguration : NSObject {
    GEOPDButtonModuleConfiguration * _buttonModuleConfig;
}

@property (nonatomic, readonly) NSArray *buttonItems;

- (void).cxx_destruct;
- (id)buttonItems;
- (id)description;
- (id)initWithButtonModuleConfiguration:(id)arg1;

@end
