
@interface GDGraphSongRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allSongId;
    GDEntityIdentifier<GDGraphEntityIdentifier> * _songId;
}

@property (nonatomic, readonly, copy) NSArray *allSongId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) GDEntityIdentifier<GDGraphEntityIdentifier> *songId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allSongId;
- (Class)graphObjectType;
- (id)initWithSongIdField:(id)arg1 allSongIdField:(id)arg2;
- (id)songId;

@end
