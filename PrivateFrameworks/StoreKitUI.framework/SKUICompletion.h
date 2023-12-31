
@interface SKUICompletion : NSObject <SKUICacheCoding> {
    NSString * _URLString;
    NSString * _alternateTitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, readonly) NSString *alternateTitle;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)URLString;
- (id)alternateTitle;
- (id)cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithCompletionDictionary:(id)arg1;
- (id)title;

@end
