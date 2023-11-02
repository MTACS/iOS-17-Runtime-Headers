
@interface PHObjectReference : NSObject <NSItemProviderReading, NSItemProviderWriting> {
    NSURL * _libraryURL;
    NSString * _localIdentifier;
    NSString * _representedType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *libraryURL;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (nonatomic, readonly, copy) NSString *representedType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)filteredObjectReferences:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)referenceForObject:(id)arg1;
+ (id)representedType;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryForReferenceType:(id)arg1;
- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2;
- (id)libraryURL;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)localIdentifier;
- (id)representedType;

@end
