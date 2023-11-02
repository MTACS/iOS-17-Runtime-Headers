
@interface MSVLyricsAgent : MSVLyricsXMLElement {
    NSString * _artistID;
    NSString * _name;
    NSString * _type;
}

@property (nonatomic, copy) NSString *artistID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)artistID;
- (id)description;
- (id)name;
- (void)setArtistID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
