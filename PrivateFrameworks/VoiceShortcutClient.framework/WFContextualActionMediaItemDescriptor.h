
@interface WFContextualActionMediaItemDescriptor : NSObject <NSSecureCoding> {
    NSString * _name;
    NSNumber * _playbackStoreId;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSNumber *playbackStoreId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaybackStoreId:(id)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)playbackStoreId;

@end
