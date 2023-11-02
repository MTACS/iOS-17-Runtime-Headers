
@interface HFHomeBuilder : HFItemBuilder <HFNamedItemBuilder> {
    NSString * _name;
    NSString * _userNotes;
    HFWallpaperEditCollectionBuilder * _wallpaperBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userNotes;
@property (nonatomic, retain) HFWallpaperEditCollectionBuilder *wallpaperBuilder;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)commitItem;
- (id)createHome;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)name;
- (id)performValidation;
- (void)setHome:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUserNotes:(id)arg1;
- (void)setWallpaperBuilder:(id)arg1;
- (id)updateName;
- (id)updateUserNotes;
- (id)userNotes;
- (id)wallpaperBuilder;

@end
