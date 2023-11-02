
@interface GEOResultTypeSearchFilter : NSObject <GEOSearchFilter> {
    unsigned long long  _types;
}

@property (nonatomic, readonly) unsigned long long types;

- (bool)applyToSearchParameters:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithResultTypes:(unsigned long long)arg1;
- (unsigned long long)types;

@end
