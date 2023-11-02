
@interface ATXPosterDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerBundleIdentifier;
    NSString * _coreIdentifier;
    NSString * _extensionBundleIdentifier;
    ATXPosterDescriptorGalleryOptions * _galleryOptions;
    NSString * _identifier;
    NSNumber * _score;
}

@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *coreIdentifier;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) ATXPosterDescriptorGalleryOptions *galleryOptions;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) NSNumber *score;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (id)galleryOptions;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 extensionBundleIdentifier:(id)arg2 containerBundleIdentifier:(id)arg3 galleryOptions:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPosterDescriptor:(id)arg1;
- (id)score;
- (void)setScore:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (id)initWithPosterBoardRepresentation:(id)arg1;
- (id)posterBoardRepresentation;

@end
