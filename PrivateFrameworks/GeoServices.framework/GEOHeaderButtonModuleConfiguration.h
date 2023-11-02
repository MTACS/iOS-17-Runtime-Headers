
@interface GEOHeaderButtonModuleConfiguration : NSObject {
    GEOPDHeaderButtonsConfiguration * _headerButtonsConfiguration;
}

@property (getter=shouldSuppressDirections, nonatomic, readonly) bool suppressDirections;

- (void).cxx_destruct;
- (id)initWithHeaderButtonConfiguration:(id)arg1;
- (bool)shouldSuppressDirections;

@end
