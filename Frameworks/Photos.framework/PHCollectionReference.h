
@interface PHCollectionReference : PHObjectReference {
    NSString * _transientIdentifier;
    NSString * _transientTitle;
}

@property (nonatomic, readonly) bool transient;
@property (nonatomic, readonly, copy) NSString *transientIdentifier;
@property (nonatomic, readonly, copy) NSString *transientTitle;

+ (id)representedType;

- (void).cxx_destruct;
- (id)_transientCollectionInLibrary:(id)arg1;
- (id)dictionaryForReferenceType:(id)arg1;
- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 transientIdentifier:(id)arg3 transientTitle:(id)arg4;
- (bool)transient;
- (id)transientIdentifier;
- (id)transientTitle;

@end
