
@interface _BlastDoorLPArtworkMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSDictionary * _colors;
    unsigned int  _version;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSDictionary *colors;
@property (nonatomic, readonly) unsigned int version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setURL:(id)arg1;
- (unsigned int)version;

@end
