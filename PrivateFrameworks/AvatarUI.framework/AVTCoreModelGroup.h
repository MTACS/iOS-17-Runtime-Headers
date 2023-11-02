
@interface AVTCoreModelGroup : NSObject {
    NSArray * _categories;
    NSString * _name;
    AVTEditingPreviewMode * _previewMode;
    NSDictionary * _symbolNames;
}

@property (nonatomic, readonly, copy) NSArray *categories;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) AVTEditingPreviewMode *previewMode;
@property (nonatomic, readonly, copy) NSDictionary *symbolNames;

- (void).cxx_destruct;
- (id)categories;
- (id)description;
- (id)initWithName:(id)arg1 symbolNames:(id)arg2 previewMode:(id)arg3 categories:(id)arg4;
- (id)name;
- (id)previewMode;
- (id)symbolNames;

@end
