
@interface VideosUI.LibMPMovieMediaEntity : VideosUI.LibMPPlayableMediaEntity {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  extrasURL;
    void isRental;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  rentalEndDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  rentalExpirationDate;
    void rentalID;
    void rentalPlaybackDuration;
}

@end
