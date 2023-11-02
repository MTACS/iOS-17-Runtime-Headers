
@interface MPModelLibraryResponse : MPModelResponse <MPCModelPlaybackResponse, MPModelResponseDetailedKeepLocalStatusRequesting> {
    MPMediaLibraryConnectionAssertion * _libraryAssertion;
    NSArray * _sectionKeepLocalStatusConfigurations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinalResponse, nonatomic, readonly) bool finalResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPMediaLibraryConnectionAssertion *libraryAssertion;
@property (nonatomic, copy) NSArray *sectionKeepLocalStatusConfigurations;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)libraryAssertion;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(id /* block */)arg2;
- (id)sectionKeepLocalStatusConfigurations;
- (void)setLibraryAssertion:(id)arg1;
- (void)setSectionKeepLocalStatusConfigurations:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (bool)isFinalResponse;

@end
