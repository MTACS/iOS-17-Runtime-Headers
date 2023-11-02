
@interface GEOBusinessInfoModuleConfiguration : NSObject {
    GEOPDBusinessInfosModuleConfiguration * _businessInfosModuleConfig;
}

@property (nonatomic, readonly) NSArray *factoidItemIndexes;

- (void).cxx_destruct;
- (id)factoidItemIndexes;
- (id)initWithBusinessInfoModuleConfiguration:(id)arg1;

@end
