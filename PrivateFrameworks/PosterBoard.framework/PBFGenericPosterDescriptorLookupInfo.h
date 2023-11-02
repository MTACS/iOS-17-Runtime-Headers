
@interface PBFGenericPosterDescriptorLookupInfo : NSObject <NSCopying, PBFPosterDescriptorLookupInfo> {
    <PRPosterExtensionDescribing> * _extension;
    PRSServerPosterPath * _path;
    <BSInvalidatable> * _pathValidityExtension;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PRPosterExtensionDescribing> *posterDescriptorExtension;
@property (nonatomic, readonly) PRSServerPosterPath *posterDescriptorPath;
@property (readonly) Class superclass;

+ (id)nullPosterDescriptorLookupInfo;
+ (id)posterDescriptorLookupInfoForPath:(id)arg1 extension:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithPath:(id)arg1 extension:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)posterDescriptorExtension;
- (id)posterDescriptorPath;

@end
