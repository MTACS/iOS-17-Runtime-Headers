
@interface VUIAppDocumentRefreshEvent : VUIAppDocumentUpdateEvent <NSCopying>

- (id)_refreshEventDescriptor;
- (id)dictionaryRepresentation;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithRefreshEventDescriptor:(id)arg1;

@end
