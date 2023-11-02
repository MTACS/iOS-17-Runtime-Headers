
@interface PLSharedAssetsContainerIncrementalChangeHighlightContainerChange : NSObject <NSSecureCoding> {
    NSURL * _destinationHighlightURI;
    NSString * _relationshipKey;
    NSURL * _sourceHighlightURI;
}

@property (nonatomic, retain) NSURL *destinationHighlightURI;
@property (nonatomic, retain) NSString *relationshipKey;
@property (nonatomic, retain) NSURL *sourceHighlightURI;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationHighlightURI;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)relationshipKey;
- (void)setDestinationHighlightURI:(id)arg1;
- (void)setRelationshipKey:(id)arg1;
- (void)setSourceHighlightURI:(id)arg1;
- (id)sourceHighlightURI;

@end
