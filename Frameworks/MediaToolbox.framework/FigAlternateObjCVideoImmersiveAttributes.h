
@interface FigAlternateObjCVideoImmersiveAttributes : FigKVCInspectable {
    struct OpaqueCMTagCollection { } * _tagCollection;
}

@property (nonatomic, readonly) long long channelLayout;
@property (nonatomic, readonly) long long packing;
@property (nonatomic, readonly) long long projection;

- (long long)channelLayout;
- (void)dealloc;
- (id)initWithTagCollection:(struct OpaqueCMTagCollection { }*)arg1;
- (long long)packing;
- (long long)projection;

@end
