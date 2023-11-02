
@interface DOCThumbnailKey : NSObject <NSCopying> {
    DOCThumbnailDescriptor * _descriptor;
    DOCNodeThumbnailIdentifier * _primaryKey;
}

@property (nonatomic, readonly) DOCThumbnailDescriptor *descriptor;
@property (nonatomic, readonly) DOCNodeThumbnailIdentifier *primaryKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptor;
- (unsigned long long)hash;
- (id)initWithPrimaryKey:(id)arg1 descriptor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)primaryKey;

@end
