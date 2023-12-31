
@interface _ICQButtonSpecification : NSObject {
    NSString * _buttonFormat;
    ICQLink * _buttonLink;
    NSDictionary * _linkForBundleIdentifier;
    NSString * _linkFormat;
    NSDictionary * _serverDict;
    NSString * _textFormat;
}

@property (nonatomic, readonly) NSString *buttonFormat;
@property (nonatomic, readonly) ICQLink *buttonLink;
@property (nonatomic, retain) NSDictionary *linkForBundleIdentifier;
@property (nonatomic, readonly) NSString *linkFormat;
@property (nonatomic, readonly) NSString *textFormat;

+ (id)buttonSpecificationSampleForLevel:(long long)arg1;

- (void).cxx_destruct;
- (id)buttonFormat;
- (id)buttonLink;
- (id)initWithServerDictionary:(id)arg1;
- (id)linkForBundleIdentifier;
- (id)linkForBundleIdentifier:(id)arg1;
- (id)linkFormat;
- (void)setLinkForBundleIdentifier:(id)arg1;
- (id)textFormat;

@end
