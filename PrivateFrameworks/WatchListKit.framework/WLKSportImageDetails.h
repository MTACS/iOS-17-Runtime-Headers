
@interface WLKSportImageDetails : NSObject {
    bool  _disableGradient;
    long long  _height;
    bool  _isP3;
    NSString * _joeColor;
    bool  _supportsLayeredImage;
    NSString * _url;
    long long  _width;
}

@property (nonatomic, readonly) bool disableGradient;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) bool isP3;
@property (nonatomic, readonly, copy) NSString *joeColor;
@property (nonatomic, readonly) bool supportsLayeredImage;
@property (nonatomic, readonly, copy) NSString *url;
@property (nonatomic, readonly) long long width;

- (void).cxx_destruct;
- (bool)disableGradient;
- (long long)height;
- (id)initWithDictionary:(id)arg1;
- (bool)isP3;
- (id)joeColor;
- (bool)supportsLayeredImage;
- (id)url;
- (long long)width;

@end
