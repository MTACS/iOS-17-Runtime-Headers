
@interface MPCModelPlaybackIntentTracklistToken : NSObject <NSSecureCoding> {
    MPModelRequest * _request;
    MPIdentifierSet * _startItemIdentifiers;
}

@property (nonatomic, copy) MPModelRequest *request;
@property (nonatomic, copy) MPIdentifierSet *startItemIdentifiers;

+ (id)requiredPropertiesForStaticMediaClips;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (void)setStartItemIdentifiers:(id)arg1;
- (id)startItemIdentifiers;

@end
