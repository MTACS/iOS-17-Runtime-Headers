
@interface MSVLyricsSongWriter : MSVLyricsXMLElement {
    NSString * _artistID;
    NSString * _name;
}

@property (nonatomic, copy) NSString *artistID;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)artistID;
- (id)description;
- (id)init;
- (id)name;
- (void)setArtistID:(id)arg1;
- (void)setName:(id)arg1;

@end
