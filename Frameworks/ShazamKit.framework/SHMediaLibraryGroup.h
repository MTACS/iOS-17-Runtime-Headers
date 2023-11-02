
@interface SHMediaLibraryGroup : NSObject <SHMediaLibraryItem> {
    NSString * _identifier;
    SHMediaLibraryItemMetadata * _metadata;
    NSMutableArray * _mutableTracksToSave;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) SHMediaLibraryItemMetadata *metadata;
@property (nonatomic, retain) NSMutableArray *mutableTracksToSave;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tracksToSave;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 metadata:(id)arg2 tracksToSave:(id)arg3;
- (void)addTracks:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2;
- (id)initWithManagedGroup:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualGroup:(id)arg1;
- (id)metadata;
- (id)mutableTracksToSave;
- (void)removeTracks:(id)arg1;
- (void)setMutableTracksToSave:(id)arg1;
- (id)tracksToSave;
- (bool)validIdentifier:(id)arg1;

@end
