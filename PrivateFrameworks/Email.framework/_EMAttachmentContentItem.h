
@interface _EMAttachmentContentItem : EMObject <EFPubliclyDescribable, EMMutableContentItem, NSSecureCoding> {
    NSArray * _availableRepresentations;
    NSString * _contentID;
    long long  _dataTransferByteCount;
    NSString * _displayName;
    int  _exchangeEventUID;
    bool  _isAvailableLocally;
    id /* block */  _loaderBlock;
    EMMailDropMetadata * _mailDropMetadata;
    long long  _storageByteCount;
    NSString * _uniformTypeIdentifier;
}

@property (nonatomic, copy) NSArray *availableRepresentations;
@property (nonatomic, copy) NSString *contentID;
@property (nonatomic) long long dataTransferByteCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic) int exchangeEventUID;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAvailableLocally;
@property (nonatomic, copy) id /* block */ loaderBlock;
@property (nonatomic, copy) EMMailDropMetadata *mailDropMetadata;
@property (nonatomic, readonly, copy) EMObjectID *objectID;
@property (nonatomic) long long storageByteCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) UTType *type;
@property (nonatomic, copy) NSString *uniformTypeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableRepresentations;
- (id)contentID;
- (long long)dataTransferByteCount;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (int)exchangeEventUID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAvailableLocally;
- (id /* block */)loaderBlock;
- (id)mailDropMetadata;
- (id)requestRepresentationWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAvailableRepresentations:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setDataTransferByteCount:(long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExchangeEventUID:(int)arg1;
- (void)setIsAvailableLocally:(bool)arg1;
- (void)setLoaderBlock:(id /* block */)arg1;
- (void)setMailDropMetadata:(id)arg1;
- (void)setStorageByteCount:(long long)arg1;
- (void)setUniformTypeIdentifier:(id)arg1;
- (long long)storageByteCount;
- (id)type;
- (id)uniformTypeIdentifier;

@end
