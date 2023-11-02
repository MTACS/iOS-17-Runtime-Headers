
@interface UCAppClipCodeURLDecoder : NSObject <UCAppClipCodeURLDecoding> {
    long long  _codingVersion;
    long long  _compressionVersion;
    struct unique_ptr<UC::SUE::PrefixedURLDecoderImpl, std::default_delete<UC::SUE::PrefixedURLDecoderImpl>> { 
        struct __compressed_pair<UC::SUE::PrefixedURLDecoderImpl *, std::default_delete<UC::SUE::PrefixedURLDecoderImpl>> { 
            struct PrefixedURLDecoderImpl {} *__value_; 
        } __ptr_; 
    }  _prefixedDecoder;
    struct unique_ptr<UC::SUE::SegmentedURLDecoderImpl, std::default_delete<UC::SUE::SegmentedURLDecoderImpl>> { 
        struct __compressed_pair<UC::SUE::SegmentedURLDecoderImpl *, std::default_delete<UC::SUE::SegmentedURLDecoderImpl>> { 
            struct SegmentedURLDecoderImpl {} *__value_; 
        } __ptr_; 
    }  _segmentedDecoder;
}

@property (nonatomic, readonly) long long codingVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)decoderWithVersion:(long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct unique_ptr<UC::UCBitVector, std::default_delete<UC::UCBitVector>> { struct __compressed_pair<UC::UCBitVector *, std::default_delete<UC::UCBitVector>> { struct UCBitVector {} *x_1_1_1; } x1; })_bitVectorFromData:(id)arg1;
- (id)_decodeURLWithDataV0:(id)arg1 error:(id*)arg2;
- (id)_decodeURLWithDataV1:(id)arg1 error:(id*)arg2;
- (id)_errorWithCoderErrorCode:(long long)arg1 message:(id)arg2;
- (void)clearCaches;
- (long long)codingVersion;
- (void)dealloc;
- (id)decodeURLWithData:(id)arg1 error:(id*)arg2;
- (id)initWithCodingVersion:(long long)arg1;

@end
