
@interface MIPluginDataContainer : MIDataContainer {
    NSString * _parentBundleID;
}

@property (nonatomic, copy) NSString *parentBundleID;

+ (id)pluginDataContainerWithIdentifier:(id)arg1 forPersona:(id)arg2 createIfNeeded:(bool)arg3 created:(bool*)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)parentBundleID;
- (void)setParentBundleID:(id)arg1;

@end
