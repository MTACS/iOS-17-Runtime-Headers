
@interface TRIPBExtensionRegistry : NSObject <NSCopying> {
    NSMutableDictionary * mutableClassMap_;
}

- (void)addExtension:(id)arg1;
- (void)addExtensions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)extensionForDescriptor:(id)arg1 fieldNumber:(long long)arg2;
- (id)init;

@end
