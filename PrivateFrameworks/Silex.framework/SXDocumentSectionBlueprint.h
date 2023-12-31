
@interface SXDocumentSectionBlueprint : NSObject <SXDocumentSectionBlueprint> {
    NSArray * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (readonly) Class superclass;

+ (id)blueprintWithItems:(id)arg1;

- (void).cxx_destruct;
- (id)items;

@end
