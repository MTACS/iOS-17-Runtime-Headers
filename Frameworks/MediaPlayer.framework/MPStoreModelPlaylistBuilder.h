
@interface MPStoreModelPlaylistBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int name : 1; 
        unsigned int trackCount : 1; 
        unsigned int editorNotes : 1; 
        unsigned int shortEditorNotes : 1; 
        unsigned int releaseDate : 1; 
        unsigned int lastModifiedDate : 1; 
        unsigned int artwork : 1; 
        unsigned int editorialArtwork : 1; 
        unsigned int tracksTiledArtwork : 1; 
        unsigned int hasCleanContent : 1; 
        unsigned int hasExplicitContent : 1; 
        unsigned int type : 1; 
        unsigned int libraryAdded : 1; 
        unsigned int keepLocalEnableState : 1; 
        unsigned int keepLocalManagedStatus : 1; 
        unsigned int keepLocalManagedStatusReason : 1; 
        unsigned int keepLocalConstraints : 1; 
        unsigned int curatorPlaylist : 1; 
        unsigned int owner : 1; 
        unsigned int publicPlaylist : 1; 
        unsigned int visiblePlaylist : 1; 
        unsigned int subscribed : 1; 
        unsigned int userEditableComponents : 1; 
        unsigned int shareURL : 1; 
        unsigned int shareShortURL : 1; 
        unsigned int descriptionText : 1; 
        unsigned int cloudVersionHash : 1; 
        unsigned int traits : 1; 
        unsigned int versionHash : 1; 
        unsigned int isFavorite : 1; 
        unsigned int isDisliked : 1; 
        unsigned int dateFavorited : 1; 
        unsigned int favoriteSongsPlaylist : 1; 
        unsigned int coverArtworkRecipe : 1; 
        unsigned int collaborative : 1; 
        unsigned int collaborationSharingMode : 1; 
        unsigned int collaborationMode : 1; 
        unsigned int collaboratorPermissions : 1; 
        unsigned int collaborationInvitationURL : 1; 
        unsigned int collaborationInvitationURLExpirationDate : 1; 
        unsigned int collaborationJoinRequestIsPending : 1; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int name : 1; 
            unsigned int handle : 1; 
        } curator; 
    }  _requestedPlaylistProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
