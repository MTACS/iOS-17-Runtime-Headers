
@interface SFDecoder : NSObject {
    id  _decoderInternal;
}

@property (nonatomic, copy) SFCodingOptions *options;

- (void).cxx_destruct;
- (id)decodeValueOfType:(Class)arg1 fromData:(id)arg2 error:(id)arg3;
- (id)initWithOptions:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;

@end
