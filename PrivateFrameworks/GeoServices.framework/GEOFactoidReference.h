
@interface GEOFactoidReference : NSObject {
    GEOPDFactoidReference * _factoidReference;
}

@property (nonatomic, readonly) unsigned int indexInFactoidComponent;
@property (nonatomic, readonly) int linkStyle;

- (void).cxx_destruct;
- (unsigned int)indexInFactoidComponent;
- (id)initWithFactoidReference:(id)arg1;
- (int)linkStyle;

@end
