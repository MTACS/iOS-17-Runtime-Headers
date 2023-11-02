
@interface NMSPartialDownloadableItem : NMSDownloadableItem {
    unsigned long long  _minimumSize;
    unsigned long long  _offset;
}

@property (nonatomic, readonly) unsigned long long minimumSize;
@property (nonatomic, readonly) unsigned long long offset;

- (id)description;
- (unsigned long long)hash;
- (id)initWithMediaLibraryIdentifier:(id)arg1 externalLibraryIdentifier:(id)arg2 size:(unsigned long long)arg3 itemType:(unsigned long long)arg4 manuallyAdded:(bool)arg5 minimumSize:(unsigned long long)arg6 offset:(unsigned long long)arg7;
- (bool)isEqual:(id)arg1;
- (unsigned long long)minimumSize;
- (unsigned long long)offset;

@end
