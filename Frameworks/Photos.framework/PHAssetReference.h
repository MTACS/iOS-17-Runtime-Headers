
@interface PHAssetReference : PHObjectReference {
    unsigned long long  _mediaSubtypes;
    long long  _mediaType;
    unsigned long long  _sourceType;
    bool  _trashed;
}

@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (getter=isTrashed, nonatomic, readonly) bool trashed;

+ (id)referenceForAsset:(id)arg1;
+ (id)representedType;

- (id)dictionaryForReferenceType:(id)arg1;
- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 mediaType:(long long)arg3 subtypes:(unsigned long long)arg4 sourceType:(unsigned long long)arg5 isTrashed:(bool)arg6;
- (bool)isTrashed;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (unsigned long long)sourceType;

@end
