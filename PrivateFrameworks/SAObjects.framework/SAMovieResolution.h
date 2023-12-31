
@interface SAMovieResolution : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long height;
@property (readonly) Class superclass;
@property (nonatomic) long long width;

+ (id)resolution;
+ (id)resolutionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (void)setWidth:(long long)arg1;
- (long long)width;

@end
