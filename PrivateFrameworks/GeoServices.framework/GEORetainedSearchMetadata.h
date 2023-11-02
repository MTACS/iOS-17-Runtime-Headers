
@interface GEORetainedSearchMetadata : NSObject <NSCopying> {
    GEOPDRetainedSearchMetadata * _retainedSearchMetadata;
}

@property (getter=_query, nonatomic, readonly) NSString *query;

- (void).cxx_destruct;
- (id)_query;
- (id)_retainedSearchMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRetainedSearchMetadata:(id)arg1;

@end
