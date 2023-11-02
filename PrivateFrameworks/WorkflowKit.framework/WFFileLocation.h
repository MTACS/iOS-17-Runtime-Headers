
@interface WFFileLocation : NSObject <NSSecureCoding, WFFileLocationRepresenting> {
    NSString * _relativeSubpath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *relativeSubpath;
@property (readonly) Class superclass;

+ (bool)canRepresentURL:(id)arg1;
+ (id)locationWithSerializedRepresentation:(id)arg1;
+ (id)locationWithURL:(id)arg1;
+ (id)subpathFromURL:(id)arg1;
+ (Class)supportedClassForURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelativeSubpath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isSupportedOnCurrentPlatform;
- (id)relativeSubpath;
- (id)resolveLocationWithError:(id*)arg1;
- (id)serializedRepresentation;
- (bool)shouldShowUsersDuringDisplay:(id)arg1;

@end
