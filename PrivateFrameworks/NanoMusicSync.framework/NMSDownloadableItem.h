
@interface NMSDownloadableItem : NSObject {
    NSString * _externalLibraryIdentifier;
    unsigned long long  _itemType;
    bool  _manuallyAdded;
    NSNumber * _mediaLibraryIdentifier;
    unsigned long long  _size;
}

@property (nonatomic, readonly) NSString *externalLibraryIdentifier;
@property (nonatomic, readonly) unsigned long long itemType;
@property (getter=isManuallyAdded, nonatomic, readonly) bool manuallyAdded;
@property (nonatomic, readonly) NSNumber *mediaLibraryIdentifier;
@property (nonatomic, readonly) unsigned long long size;

- (void).cxx_destruct;
- (id)description;
- (id)externalLibraryIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithMediaLibraryIdentifier:(id)arg1 externalLibraryIdentifier:(id)arg2 size:(unsigned long long)arg3 itemType:(unsigned long long)arg4 manuallyAdded:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isManuallyAdded;
- (unsigned long long)itemType;
- (id)mediaLibraryIdentifier;
- (unsigned long long)size;

@end
