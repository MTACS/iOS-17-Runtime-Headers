
@interface _ATXModePosterCandidate : NSObject {
    ATXPosterDescriptor * _descriptor;
    NSString * _fontName;
    bool  _isPreferredForGallery;
}

@property (nonatomic, readonly) ATXPosterDescriptor *descriptor;
@property (nonatomic, readonly, copy) NSString *fontName;
@property (nonatomic, readonly) bool isPreferredForGallery;

- (void).cxx_destruct;
- (id)descriptor;
- (id)fontName;
- (id)initWithDescriptor:(id)arg1 fontName:(id)arg2 isPreferredForGallery:(bool)arg3;
- (bool)isPreferredForGallery;

@end
