
@interface PXStoryConcreteResource : NSObject <PXStoryResource> {
    NSString * _identifier;
    long long  _kind;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *px_storyResourceIdentifier;
@property (nonatomic, readonly) long long px_storyResourceKind;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIdentifier:(id)arg1 kind:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)px_storyResourceIdentifier;
- (long long)px_storyResourceKind;

@end
