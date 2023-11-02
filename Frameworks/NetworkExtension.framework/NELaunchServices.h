
@interface NELaunchServices : NSObject

+ (id)bundleProxyForIdentifier:(id)arg1 uid:(unsigned int)arg2 plugins:(id*)arg3;
+ (id)lookupIdentifier:(id)arg1 plugins:(id*)arg2;
+ (id)pluginClassToExtensionPoint:(long long)arg1;
+ (id)pluginProxyWithIdentifier:(id)arg1 type:(id)arg2 pluginClass:(long long)arg3 extensionPoint:(id)arg4;

@end
