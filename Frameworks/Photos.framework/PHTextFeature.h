
@interface PHTextFeature : NSObject <NSSecureCoding> {
    unsigned long long  _origin;
    NSString * _string;
    long long  _type;
    float  _weight;
}

@property (nonatomic) unsigned long long origin;
@property (nonatomic, copy) NSString *string;
@property (nonatomic) long long type;
@property (nonatomic) float weight;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_momentLocalIdentifierByAssetLocalIdentifiersForAssets:(id)arg1;
+ (id)_textFeaturesByMomentLocalIdentifierForMomentLocalIdentifiers:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)fetchTextFeaturesByAssetLocalIdentifierForAssets:(id)arg1;
+ (id)stringForOrigin:(unsigned long long)arg1;
+ (id)stringForType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)textFeatureWithData:(id)arg1;
+ (id)textFeatureWithType:(long long)arg1 string:(id)arg2 weight:(float)arg3 origin:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedData;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 string:(id)arg2 weight:(float)arg3 origin:(unsigned long long)arg4;
- (unsigned long long)origin;
- (void)setOrigin:(unsigned long long)arg1;
- (void)setString:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setWeight:(float)arg1;
- (id)string;
- (long long)type;
- (float)weight;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

+ (id)pg_textFeatureForFeature:(id)arg1;

@end
