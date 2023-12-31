
@interface MPCModelRadioPersonalizationResponse : MPModelResponse {
    MPStoreLibraryPersonalizationResponse * _personalizationResponse;
    MPSectionedCollection * _radioStationTracks;
}

@property (nonatomic, copy) MPSectionedCollection *radioStationTracks;
@property (nonatomic, readonly, copy) MPSectionedCollection *results;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;
- (id)radioStationTracks;
- (void)setRadioStationTracks:(id)arg1;

@end
