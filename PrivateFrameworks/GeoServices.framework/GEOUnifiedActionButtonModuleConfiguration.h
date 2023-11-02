
@interface GEOUnifiedActionButtonModuleConfiguration : NSObject {
    GEOPDUnifiedActionModuleConfiguration * _buttonModuleConfig;
}

@property (nonatomic, readonly) NSArray *buttonItems;

- (void).cxx_destruct;
- (id)buttonItems;
- (id)description;
- (id)initWithUnifiedActionModuleConfiguration:(id)arg1;

@end
