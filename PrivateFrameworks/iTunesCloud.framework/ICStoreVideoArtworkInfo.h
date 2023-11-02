
@interface ICStoreVideoArtworkInfo : NSObject <NSSecureCoding> {
    NSDictionary * _aspectRatioToCRABSVideoDictionaries;
    NSDictionary * _aspectRatioToHLSVideoURL;
    NSDictionary * _aspectRatioToPreviewFrameArtworkInfo;
    NSDictionary * _responseDictionary;
    NSString * _stringRepresentation;
}

@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CRABSVideoURLMatchingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)HLSVideoURLForAspectRatio:(double)arg1;
- (id)_aspectRatioKeyForAspectRatio:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoArtworkResponseDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)previewFrameArtworkInfoMatchingAspectRatio:(double)arg1;
- (id)responseDictionary;
- (id)stringRepresentation;
- (id)supportedSizesForCRABSVideoForAspectRatio:(double)arg1;

@end
