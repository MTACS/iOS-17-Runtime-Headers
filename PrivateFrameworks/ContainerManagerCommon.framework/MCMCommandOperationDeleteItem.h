
@interface MCMCommandOperationDeleteItem : NSObject {
    NSSet * _codeSignIdentifiersToRemove;
    <MCMDeleteManifest> * _manifest;
    <MCMMetadata> * _metadata;
}

@property (nonatomic, readonly) NSSet *codeSignIdentifiersToRemove;
@property (nonatomic, retain) <MCMDeleteManifest> *manifest;
@property (nonatomic, readonly) <MCMMetadata> *metadata;

- (void).cxx_destruct;
- (id)codeSignIdentifiersToRemove;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMetadata:(id)arg1 codeSignIdentifiersToRemove:(id)arg2 manifest:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)manifest;
- (id)metadata;
- (void)setManifest:(id)arg1;

@end
