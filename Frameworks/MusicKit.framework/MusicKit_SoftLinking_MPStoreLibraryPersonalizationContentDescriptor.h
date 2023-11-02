
@interface MusicKit_SoftLinking_MPStoreLibraryPersonalizationContentDescriptor : NSObject <MusicKit_SoftLinking_MPSectionedCollectionObject> {
    MPStoreLibraryPersonalizationContentDescriptor * _underlyingContentDescriptor;
}

@property (nonatomic, readonly) MPStoreLibraryPersonalizationContentDescriptor *_underlyingContentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id underlyingObject;

- (void).cxx_destruct;
- (id)_underlyingContentDescriptor;
- (id)initWithModel:(id)arg1 personalizationStyle:(long long)arg2;
- (id)underlyingObject;

@end
