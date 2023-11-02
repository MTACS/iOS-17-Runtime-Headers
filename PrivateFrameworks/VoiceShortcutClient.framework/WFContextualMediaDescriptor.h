
@interface WFContextualMediaDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSData * _artwork;
    INPlayMediaIntent * _intent;
    INMediaItem * _mediaItem;
    <WFPropertyListObject> * _serializedRepresentation;
}

@property (nonatomic, readonly) NSData *artwork;
@property (nonatomic, readonly) INPlayMediaIntent *intent;
@property (nonatomic, readonly) INMediaItem *mediaItem;
@property (nonatomic, readonly) <WFPropertyListObject> *serializedRepresentation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artwork;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaItem:(id)arg1 serializedRepresentation:(id)arg2;
- (id)initWithPlayMediaIntent:(id)arg1 artwork:(id)arg2;
- (id)intent;
- (id)mediaItem;
- (id)serializedRepresentation;

@end
