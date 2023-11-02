
@interface NTKVideoPlayerListing : NSObject <NSCopying, NTKAVListing> {
    NSArray * _attributes;
    UIColor * _color;
    CLKDevice * _device;
    unsigned long long  _endBehavior;
    NSString * _filename;
    NSURL * _url;
    CLKVideo * _video;
}

@property (nonatomic, retain) NSArray *attributes;
@property (nonatomic, retain) UIColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long endBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CLKVideo *video;

+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2;
+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2 andColor:(id)arg3;
+ (id)listingForDevice:(id)arg1 withURL:(id)arg2;

- (void).cxx_destruct;
- (id)attributes;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)discardAssets;
- (unsigned long long)endBehavior;
- (id)initForDevice:(id)arg1 withFilename:(id)arg2;
- (id)initForDevice:(id)arg1 withURL:(id)arg2;
- (void)setAttributes:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setEndBehavior:(unsigned long long)arg1;
- (bool)snapshotDiffers:(id)arg1;
- (id)video;

@end
