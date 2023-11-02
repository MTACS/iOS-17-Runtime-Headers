
@interface AVAssetFragment : NSObject {
    AVAssetFragmentInternal * _internal;
}

@property (readonly) long long sequenceNumber;

+ (id)fragmentWithSequenceNumber:(long long)arg1;

- (void)dealloc;
- (id)init;
- (id)initWithSequenceNumber:(long long)arg1;
- (long long)sequenceNumber;

@end
