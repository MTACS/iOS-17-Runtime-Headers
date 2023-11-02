
@interface GEOGuidesHomeResultFilter : NSObject {
    GEOPDGuidesHomeResultFilter * _resultFilter;
}

@property (nonatomic, readonly) GEOGuidesHomeResultFilterTypeConcept *conceptFilter;
@property (nonatomic, readonly) long long filterType;
@property (nonatomic, readonly) GEOPDGuidesHomeResultFilter *pdResultFilter;

- (void).cxx_destruct;
- (id)conceptFilter;
- (long long)filterType;
- (id)initWithGuidesHomeResultFilter:(id)arg1;
- (id)pdResultFilter;

@end
