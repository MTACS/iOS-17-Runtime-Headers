
@interface UCAppClipCodeURLEncoder : NSObject <UCAppClipCodeURLEncoding, UCAppClipCodeURLEncodingPrivate> {
    long long  _codingVersion;
    long long  _compressionVersion;
    struct unique_ptr<UC::SUE::PrefixedURLEncoderImpl, std::default_delete<UC::SUE::PrefixedURLEncoderImpl>> { 
        struct __compressed_pair<UC::SUE::PrefixedURLEncoderImpl *, std::default_delete<UC::SUE::PrefixedURLEncoderImpl>> { 
            struct PrefixedURLEncoderImpl {} *__value_; 
        } __ptr_; 
    }  _prefixedURLEncoder;
    struct unique_ptr<UC::SUE::SegmentedURLEncoderImpl, std::default_delete<UC::SUE::SegmentedURLEncoderImpl>> { 
        struct __compressed_pair<UC::SUE::SegmentedURLEncoderImpl *, std::default_delete<UC::SUE::SegmentedURLEncoderImpl>> { 
            struct SegmentedURLEncoderImpl {} *__value_; 
        } __ptr_; 
    }  _segmentedEncoder;
}

@property (nonatomic, readonly) long long codingVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)encoderWithExtendedInterfaceWithVersion:(long long)arg1;
+ (id)encoderWithVersion:(long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_convertRawURLEncodingBitsToAppClipCodeData:(const void*)arg1;
- (struct shared_ptr<UC::SUE::UCSegmentedURLEncodingResult> { struct UCSegmentedURLEncodingResult {} *x1; struct __shared_weak_count {} *x2; })_encodeURL:(id)arg1 error:(id*)arg2;
- (id)_errorFromCoderError:(const void*)arg1;
- (id)_errorWithCoderErrorCode:(long long)arg1 codingErrorSymbol:(id)arg2 message:(id)arg3;
- (id)_errorWithUnsupportedURLComponentType:(long long)arg1;
- (void)clearCaches;
- (long long)codingVersion;
- (void)dealloc;
- (id)encodeURL:(id)arg1 error:(id*)arg2;
- (id)encodeURLV0:(id)arg1 error:(id*)arg2;
- (id)encodeURLV1:(id)arg1 error:(id*)arg2;
- (id)initWithCodingVersion:(long long)arg1;
- (id)resultForEncodingURL:(id)arg1 error:(id*)arg2;

@end
