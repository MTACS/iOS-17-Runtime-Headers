
@interface _EXLoadOperator : NSObject <_EXItemProviderLoading>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)_init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemProvider:(id)arg1;
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;
- (void)loadPreviewImageWithCompletionHandler:(id /* block */)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;

@end
