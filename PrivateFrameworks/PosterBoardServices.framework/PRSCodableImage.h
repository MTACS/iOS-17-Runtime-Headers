
@interface PRSCodableImage : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    struct CGImage { } * _cachedImage;
    long long  _representation;
    double  _scale;
    struct CGImage { } * _sourceImage;
    IOSurface * _surface;
    NSURL * _url;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;

+ (bool)bs_encodeRepresentation:(long long)arg1 value:(id)arg2 withCoder:(id)arg3;
+ (struct CGImage { }*)createCGImageFromData:(id)arg1 error:(out id*)arg2;
+ (struct CGImage { }*)createCGImageFromURL:(id)arg1 error:(out id*)arg2;
+ (id)dataRepresentationForImage:(struct CGImage { }*)arg1 error:(out id*)arg2;
+ (void)encodeRepresentation:(long long)arg1 value:(id)arg2 withCoder:(id)arg3;
+ (id)makeWithOther:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (struct CGImage { }*)buildCGImageWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromSourceData:(id)arg1 scale:(double)arg2 error:(out id*)arg3;
- (id)initFromURL:(id)arg1 scale:(double)arg2 error:(out id*)arg3;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 error:(out id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithIOSurface:(id)arg1 scale:(double)arg2 error:(out id*)arg3;
- (bool)isEqualRepresentation:(id)arg1;
- (bool)refersToIdenticalImageFrom:(id)arg1;
- (double)scale;
- (void)setImage:(struct CGImage { }*)arg1;
- (id)surfaceCreatingIfNecessary:(bool)arg1;
- (id)wrappedIOSurface;

@end
