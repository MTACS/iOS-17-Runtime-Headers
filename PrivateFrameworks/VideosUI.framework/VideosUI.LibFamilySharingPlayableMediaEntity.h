
@interface VideosUI.LibFamilySharingPlayableMediaEntity : VideosUI.LibFamilySharingBaseMediaEntity {
    void allowsManualDownloadRenewal;
    void assetType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  availabilityEndDate;
    void contentRating;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  downloadExpirationDate;
    void duration;
    void genre;
    void hasDolbyAtmos;
    void hlsPlaylistURLString;
    void isFullyWatched;
    void markAsDeleted;
    void offers;
    void personalizedOffers;
    void redownloadParams;
    void renewsOfflineKeysAutomatically;
    void resolutionClass;
    void storeID;
    void videoRange;
}

@end
