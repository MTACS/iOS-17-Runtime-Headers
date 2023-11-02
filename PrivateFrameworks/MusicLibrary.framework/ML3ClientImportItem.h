
@interface ML3ClientImportItem : NSObject <NSCopying, NSSecureCoding> {
    MIPMediaItem * _mediaItem;
    MIPMultiverseIdentifier * _multiverseIdentifier;
}

@property (nonatomic, readonly, copy) MIPMediaItem *mediaItem;
@property (nonatomic, readonly, copy) MIPMultiverseIdentifier *multiverseIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1 mediaItem:(id)arg2;
- (id)mediaItem;
- (id)multiverseIdentifier;

@end
