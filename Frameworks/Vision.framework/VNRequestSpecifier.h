
@interface VNRequestSpecifier : NSObject <NSCopying, NSSecureCoding, VNRequestSpecifying> {
    Class  _cachedRequestClass;
    NSString * _cachedRequestClassName;
    unsigned int  _requestClassCode;
    unsigned long long  _requestRevision;
}

@property (readonly, copy) NSArray *allModelEquivalents;
@property (readonly) bool isPrivate;
@property (readonly) bool isPrivateRequestClass;
@property (readonly) bool isPrivateRevision;
@property (readonly) bool isPublic;
@property (readonly) bool isPublicRequestClass;
@property (readonly) bool isPublicRevision;
@property (readonly) bool observationProvidesBoundsNormalizedToROI;
@property (readonly) unsigned int requestClassCode;
@property (readonly, copy) NSString *requestClassName;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (id)allAvailableRequestClassNames;
+ (id)availablePrivateRequestClassNames;
+ (id)availableRequestClassNames;
+ (id)specifierForRequest:(id)arg1;
+ (id)specifierForRequestClass:(Class)arg1 revision:(unsigned long long)arg2 error:(id*)arg3;
+ (id)specifierForRequestClassCode:(unsigned int*)arg1 revision:(unsigned long long)arg2 error:(id*)arg3;
+ (id)specifierForRequestClassName:(id)arg1 revision:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allModelEquivalents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasModelEquivalencyToRequestSpecifier:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestClass:(Class)arg1 name:(id)arg2 code:(unsigned int)arg3 revision:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isPrivate;
- (bool)isPrivateRequestClass;
- (bool)isPrivateRevision;
- (bool)isPublic;
- (bool)isPublicRequestClass;
- (bool)isPublicRevision;
- (bool)observationProvidesBoundsNormalizedToROI;
- (bool)representsSupportedRequestAndReturnError:(id*)arg1;
- (Class)requestClassAndReturnError:(id*)arg1;
- (unsigned int)requestClassCode;
- (id)requestClassName;
- (unsigned long long)requestRevision;
- (bool)specifiesAnyRequestClass:(Class)arg1;
- (bool)specifiesAnyRequestClassName:(id)arg1;
- (bool)specifiesRequestClass:(Class)arg1;
- (bool)specifiesRequestClass:(Class)arg1 revision:(unsigned long long)arg2;
- (bool)specifiesRequestClass:(Class)arg1 withAnyRevision:(unsigned long long)arg2;
- (bool)specifiesRequestClassName:(id)arg1;
- (bool)specifiesRequestClassName:(id)arg1 revision:(unsigned long long)arg2;
- (bool)specifiesRequestClassName:(id)arg1 withAnyRevision:(unsigned long long)arg2;

@end
