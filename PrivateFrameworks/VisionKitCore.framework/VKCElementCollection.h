
@interface VKCElementCollection : VKCBaseElement {
    NSArray * __children;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *_children;
@property (nonatomic, retain) NSString *title;

+ (id)collectionWithTitle:(id)arg1 children:(id)arg2 parent:(id)arg3;
+ (id)collectionWithTitle:(id)arg1 elementInfoText:(id)arg2 parent:(id)arg3;

- (void).cxx_destruct;
- (id)_children;
- (id)children;
- (void)setTitle:(id)arg1;
- (void)set_children:(id)arg1;
- (id)stringValue;
- (id)title;

@end
