
@interface SUUICompletionList : NSObject <SUUICacheCoding> {
    NSArray * _completions;
    NSString * _title;
}

@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (nonatomic, readonly) NSArray *completions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)cacheRepresentation;
- (id)completions;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithCompletionListDictionary:(id)arg1;
- (id)title;

@end
