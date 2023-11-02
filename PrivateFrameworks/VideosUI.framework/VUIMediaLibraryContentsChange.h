
@interface VUIMediaLibraryContentsChange : NSObject <NSCopying> {
    unsigned long long  _revision;
}

@property (nonatomic) unsigned long long revision;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRevision:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)revision;
- (void)setRevision:(unsigned long long)arg1;

@end
