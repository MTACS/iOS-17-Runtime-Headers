
@interface PXStoryConcreteColorResource : PXStoryConcreteResource <PXStoryColorResource> {
    UIColor * _color;
    long long  _colorType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *px_storyResourceColor;
@property (nonatomic, readonly) long long px_storyResourceColorType;
@property (nonatomic, readonly) NSString *px_storyResourceIdentifier;
@property (nonatomic, readonly) long long px_storyResourceKind;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithColor:(id)arg1 type:(long long)arg2;
- (id)initWithIdentifier:(id)arg1 kind:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)px_storyResourceColor;
- (long long)px_storyResourceColorType;

@end
