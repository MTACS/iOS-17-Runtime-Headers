
@interface VUIMutableBookmark : VUIBookmark

+ (bool)supportsSecureCoding;

- (void)setBookmarkTime:(double)arg1;
- (void)setBookmarkTimestamp:(id)arg1;
- (void)setHasBeenPlayed:(bool)arg1;
- (void)setHasBeenRented:(bool)arg1;
- (void)setIsMarkedAsUnwatched:(bool)arg1;
- (void)setPlayCount:(unsigned long long)arg1;

@end
