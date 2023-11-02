
@interface BLPurchaseDAAPItem : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _containerItemID;
    unsigned char  _downloadStatus;
    NSDictionary * _frozenInfo;
    bool  _isFrozen;
    struct { 
        unsigned int itemHasVideo : 1; 
    }  _itemFlags;
    unsigned long long  _itemID;
    NSMutableDictionary * _mutableInfo;
    NSString * _name;
    NSString * _songalbum;
    NSString * _songalbumartist;
    unsigned long long  _songalbumid;
    NSString * _songartist;
}

@property (nonatomic, readonly) NSDictionary *additionalInfo;
@property (nonatomic) unsigned int containerItemID;
@property (nonatomic) unsigned char downloadStatus;
@property (nonatomic, readonly) NSDate *expectedDate;
@property (nonatomic, retain) NSDictionary *frozenInfo;
@property (nonatomic, retain) NSNumber *hasVideo;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic, readonly) int mediaKind;
@property (nonatomic, retain) NSMutableDictionary *mutableInfo;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *songalbum;
@property (nonatomic, retain) NSString *songalbumartist;
@property (nonatomic) unsigned long long songalbumid;
@property (nonatomic, retain) NSString *songartist;

+ (id)item;
+ (id)itemWithItem:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned int)containerItemID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned char)downloadStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedDate;
- (void)freeze;
- (id)frozenInfo;
- (id)hasVideo;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemID;
- (int)mediaKind;
- (id)mutableInfo;
- (id)name;
- (id)objectForKey:(id)arg1;
- (void)setContainerItemID:(unsigned int)arg1;
- (void)setDownloadStatus:(unsigned char)arg1;
- (void)setFrozenInfo:(id)arg1;
- (void)setHasVideo:(id)arg1;
- (void)setItemID:(unsigned long long)arg1;
- (void)setMutableInfo:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setSongalbum:(id)arg1;
- (void)setSongalbumartist:(id)arg1;
- (void)setSongalbumid:(unsigned long long)arg1;
- (void)setSongartist:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)songalbum;
- (id)songalbumartist;
- (unsigned long long)songalbumid;
- (id)songartist;
- (void)thaw;
- (void)updateItemWithDictionary:(id)arg1;
- (void)updateItemWithItem:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
