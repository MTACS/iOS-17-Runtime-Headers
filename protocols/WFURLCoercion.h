
@protocol WFURLCoercion <NSObject>

@required

+ (bool)urlItem_canCoerceFromURL:(NSURL *)arg1;
+ (void)urlItem_generateObjectRepresentations:(void *)arg1 fromURL:(void *)arg2 forClass:(void *)arg3; // needs 3 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, NSURL *, Class
+ (NSOrderedSet *)urlItem_outputClasses;
+ (NSDictionary *)urlItem_sharingItemClassesByBundleIdentifier;

@end
