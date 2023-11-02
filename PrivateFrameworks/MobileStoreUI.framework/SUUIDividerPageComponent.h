
@interface SUUIDividerPageComponent : SUUIPageComponent {
    NSString * _title;
}

@property (nonatomic, readonly) NSString *dividerTitle;
@property (nonatomic, readonly) SUUIDividerViewElement *viewElement;

- (void).cxx_destruct;
- (long long)componentType;
- (id)dividerTitle;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithDividerTitle:(id)arg1;
- (id)initWithViewElement:(id)arg1;

@end
