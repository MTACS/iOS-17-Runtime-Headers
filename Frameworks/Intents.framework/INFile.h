
@interface INFile : NSObject <INEnumerable, INJSONSerializable, NSSecureCoding, WFCodableAttributeContentConvertible, WFCodableAttributeTransformable> {
    NSData * _bookmarkData;
    NSData * _data;
    bool  _deletesFileOnDeallocationIfNeeded;
    NSURL * _fileURL;
    NSString * _filename;
    NSData * _memoryMappedFileData;
    NSNumber * _removedOnCompletionValue;
    NSString * _typeIdentifier;
}

@property (setter=_setAssociatedAuditToken:, nonatomic) struct { unsigned int x1[8]; } _associatedAuditToken;
@property (nonatomic, readonly, copy) NSData *_bookmarkData;
@property (setter=_setDeletesFileOnDeallocationIfNeeded:, nonatomic) bool _deletesFileOnDeallocationIfNeeded;
@property (nonatomic, readonly) bool _hasAssociatedAuditToken;
@property (nonatomic, readonly) bool _isFileURLBased;
@property (getter=_isMarkedForDeletionOnDeallocation, setter=_setMarkedForDeletionOnDeallocation:, nonatomic) bool _markedForDeletionOnDeallocation;
@property (setter=_setRemovedOnCompletionValue:, nonatomic, copy) NSNumber *_removedOnCompletionValue;
@property (nonatomic, readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, copy) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool removedOnCompletion;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (id)fileWithData:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3;
+ (id)fileWithFileURL:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })_associatedAuditToken;
- (bool)_associatedAuditTokenIsEqualToAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)_bookmarkData;
- (bool)_deletesFileOnDeallocationIfNeeded;
- (id)_dictionaryRepresentation;
- (bool)_hasAssociatedAuditToken;
- (id)_initWithBookmarkData:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3 removedOnCompletion:(id)arg4;
- (id)_initWithData:(id)arg1 filename:(id)arg2 fileURL:(id)arg3 typeIdentifier:(id)arg4 removedOnCompletion:(id)arg5;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(id /* block */)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (bool)_isFileURLBased;
- (bool)_isMarkedForDeletionOnDeallocation;
- (id)_removedOnCompletionValue;
- (void)_setAssociatedAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)_setDeletesFileOnDeallocationIfNeeded:(bool)arg1;
- (void)_setMarkedForDeletionOnDeallocation:(bool)arg1;
- (void)_setRemovedOnCompletionValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)filename;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)removedOnCompletion;
- (void)setFilename:(id)arg1;
- (void)setRemovedOnCompletion:(bool)arg1;
- (id)typeIdentifier;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (void)coerceContentItems:(id)arg1 toSupportedUTIs:(id)arg2 completion:(id /* block */)arg3;
+ (void)coerceContentItemsIfAppropriate:(id)arg1 toSupportedUTIs:(id)arg2 withParameterStates:(id)arg3 dynamicOptions:(bool)arg4 completion:(id /* block */)arg5;
+ (id)compatibleFileTypeForContentItem:(id)arg1 availableTypes:(id)arg2;
+ (void)getINFileRepresentationsFromContent:(id)arg1 byCoercingToSupportedUTIs:(id)arg2 withParameterState:(id)arg3 dynamicOptions:(bool)arg4 completion:(id /* block */)arg5;
+ (Class)wf_contentItemClass;
+ (id)wf_fileWithFileRepresentation:(id)arg1 bookmarkData:(id)arg2 displayName:(id)arg3;
+ (id)wf_fileWithFileRepresentation:(id)arg1 displayName:(id)arg2;
+ (bool)wf_processParameterValue:(id)arg1 parameterState:(id)arg2 coerceToSupportedUTIs:(id)arg3 array:(bool)arg4 dynamicOptions:(bool)arg5 completionHandler:(id /* block */)arg6;

- (id)wf_contentItemWithCodableAttribute:(id)arg1;
- (id)wf_fileRepresentation;
- (id)wf_initWithBookmarkData:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3 removedOnCompletion:(id)arg4;
- (id)wf_initWithData:(id)arg1 filename:(id)arg2 fileURL:(id)arg3 typeIdentifier:(id)arg4 removedOnCompletion:(id)arg5;
- (bool)wf_removedOnCompletion;
- (void)wf_transformUsingCodableAttribute:(id)arg1 completionHandler:(id /* block */)arg2;

@end
