
@interface _ML3ArtworkConfigurationMediaArtworkTypeKey : NSObject <NSCopying> {
    long long  _artworkType;
    unsigned int  _mediaType;
}

+ (id)keyWithMediaType:(unsigned int)arg1 artworkType:(long long)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
