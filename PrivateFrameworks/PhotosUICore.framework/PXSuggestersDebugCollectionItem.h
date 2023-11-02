
@interface PXSuggestersDebugCollectionItem : NSObject {
    NSString * _description;
    NSDictionary * _info;
    NSString * _name;
}

@property (readonly) NSString *description;
@property (readonly) NSDictionary *info;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (id)description;
- (id)info;
- (id)initWithSuggesterInfo:(id)arg1;
- (id)name;

@end
