
@interface NRLinkPreferences : NSObject <NSCopying> {
    unsigned char  _linkType;
}

@property (nonatomic, readonly) unsigned char linkType;

+ (id)createFromEncodedXPCDict:(id)arg1;

- (id)copyEncodedXPCDict;
- (id)copyLongDescription;
- (id)copyShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithLinkType:(unsigned char)arg1;
- (bool)isNotEmpty;
- (unsigned char)linkType;

@end
