
@interface AVTAvatarEditorColorDefaultsProvider : NSObject <NSCopying> {
    NSDictionary * _categoryMapping;
    NSDictionary * _definitions;
    AVTEditingModelColors * _editingColors;
}

@property (nonatomic, retain) NSDictionary *categoryMapping;
@property (nonatomic, retain) NSDictionary *definitions;
@property (nonatomic, retain) AVTEditingModelColors *editingColors;

+ (long long)categoryForKey:(id)arg1;
+ (long long)colorIndexForKey:(id)arg1;
+ (id)keyForCategory:(long long)arg1 colorIndex:(long long)arg2;

- (void).cxx_destruct;
- (id)categoryMapping;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultColorForCategory:(long long)arg1 destination:(long long)arg2 withConfiguration:(id)arg3;
- (id)defaultColorPresetForCategory:(long long)arg1 destination:(long long)arg2 withConfiguration:(id)arg3;
- (id)definitions;
- (id)editingColors;
- (id)initWithColorDefaultsDictionary:(id)arg1 editingColors:(id)arg2;
- (void)setCategoryMapping:(id)arg1;
- (void)setDefinitions:(id)arg1;
- (void)setEditingColors:(id)arg1;

@end
