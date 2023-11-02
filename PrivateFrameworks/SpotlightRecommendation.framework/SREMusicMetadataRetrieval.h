
@interface SREMusicMetadataRetrieval : NSObject

- (void)extractAlbumMetadataFromFact:(id)arg1 withAllAnswers:(id)arg2 toCandidate:(id)arg3;
- (void)extractArtistMetadataFromFact:(id)arg1 withAllAnswers:(id)arg2 toCandidate:(id)arg3;
- (void)extractGenreMetadataFromFact:(id)arg1 withAllAnswers:(id)arg2 toCandidate:(id)arg3;
- (id)parseAnswer:(id)arg1 withAllAnswers:(id)arg2;
- (id)retrieveMusicMetadata:(id)arg1 error:(id*)arg2;

@end
