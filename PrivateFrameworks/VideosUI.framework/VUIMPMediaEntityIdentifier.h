
@interface VUIMPMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal> {
    VUIMediaEntityType * _mediaEntityType;
    NSNumber * _persistentID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) VUIMediaEntityType *mediaEntityType;
@property (nonatomic, copy) NSNumber *persistentID;
@property (readonly) Class superclass;

+ (id)mediaItemIdentifierWithMediaItem:(id)arg1;
+ (id)showIdentifierWithMediaItem:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mediaEntityType;
- (id)persistentID;
- (void)setMediaEntityType:(id)arg1;
- (void)setPersistentID:(id)arg1;

@end
