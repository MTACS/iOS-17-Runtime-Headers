
@protocol UIItemProviderWriting <NSItemProviderWriting>

@required

- (NSProgress *)loadDataWithTypeIdentifier:(void *)arg1 forItemProviderCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@optional

+ (NSArray *)writableTypeIdentifiersForItemProvider;

@end
