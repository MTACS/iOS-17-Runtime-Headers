
@interface NULinkedContentManager : NSObject <NULinkedContentProvider> {
    NSArray * _linkedContentProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *linkedContentProviders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLinkedContentProviders:(id)arg1;
- (id)linkedContentProviders;
- (id)loadLinkedContentForHeadline:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (id)loadLinkedContentForHeadline:(id)arg1 withContext:(id)arg2 priority:(long long)arg3 completion:(id /* block */)arg4;

@end
