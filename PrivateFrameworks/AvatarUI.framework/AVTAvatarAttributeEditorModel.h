
@interface AVTAvatarAttributeEditorModel : NSObject {
    NSArray * _categories;
}

@property (nonatomic, readonly) NSArray *categories;

+ (id)diffOfSectionItems:(id)arg1 fromSectionItems:(id)arg2;
+ (id)diffOfSections:(id)arg1 fromSections:(id)arg2;

- (void).cxx_destruct;
- (id)categories;
- (id)differenceFromModel:(id)arg1;
- (id)initWithCategories:(id)arg1;

@end
