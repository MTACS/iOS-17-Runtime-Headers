
@interface MPPlaybackArchiveDisplayProperties : NSObject <MPMutablePlaybackArchiveDisplayProperties, NSCopying, NSSecureCoding> {
    NSData * _artworkImageData;
    bool  _final;
    NSMutableDictionary * _storage;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSData *artworkImageData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *storage;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artworkImageData;
- (id)copyWithOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 artworkImageData:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setArtworkImageData:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)storage;
- (id)subtitle;
- (id)title;

@end
