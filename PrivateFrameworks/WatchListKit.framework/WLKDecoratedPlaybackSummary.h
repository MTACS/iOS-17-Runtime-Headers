
@interface WLKDecoratedPlaybackSummary : NSObject <NSSecureCoding> {
    NSString * _canonicalID;
    WLKPlaybackSummary * _summary;
}

@property (nonatomic, readonly, copy) NSString *canonicalID;
@property (nonatomic, readonly) WLKPlaybackSummary *summary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)canonicalID;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSummary:(id)arg1 canonicalID:(id)arg2;
- (id)summary;

@end
