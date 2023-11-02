
@interface MPCPlayerResponseSection : NSObject {
    bool  _autoPlaySection;
    MPModelGenericObject * _metadataObject;
    MPCPlayerResponse * _response;
}

@property (getter=isAutoPlaySection, nonatomic, readonly) bool autoPlaySection;
@property (nonatomic, readonly) MPModelGenericObject *metadataObject;
@property (nonatomic, readonly) MPCPlayerResponse *response;

- (void).cxx_destruct;
- (id)initWithModelGenericObject:(id)arg1 sectionIndex:(long long)arg2 response:(id)arg3;
- (bool)isAutoPlaySection;
- (id)metadataObject;
- (id)remove;
- (id)response;

@end
