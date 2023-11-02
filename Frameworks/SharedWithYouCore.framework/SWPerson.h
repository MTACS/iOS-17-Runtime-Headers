
@interface SWPerson : NSObject <NSSecureCoding> {
    NSData * _customThumbnailImageData;
    SWPersonIdentity * _identity;
    id  _slPerson;
}

@property (nonatomic, readonly) NSData *customThumbnailImageData;
@property (nonatomic, retain) SWPersonIdentity *identity;
@property (nonatomic, retain) id slPerson;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)customThumbnailImageData;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 displayName:(id)arg2 thumbnailImageData:(id)arg3;
- (id)initWithHandle:(id)arg1 identity:(id)arg2 displayName:(id)arg3 thumbnailImageData:(id)arg4;
- (void)setIdentity:(id)arg1;
- (void)setSlPerson:(id)arg1;
- (id)slPerson;
- (id)thumbnailImageData;

@end
