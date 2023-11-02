
@interface HUComfortSound : NSObject <NSSecureCoding> {
    AXAsset * _asset;
    HUComfortSoundsShuffler * _fileShuffler;
    NSString * _name;
    NSURL * _path;
    unsigned long long  _soundGroup;
}

@property (nonatomic, retain) AXAsset *asset;
@property (nonatomic, retain) HUComfortSoundsShuffler *fileShuffler;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSURL *path;
@property (nonatomic) unsigned long long soundGroup;

+ (id)comfortSoundWithAsset:(id)arg1;
+ (id)defaultComfortSoundForGroup:(unsigned long long)arg1;
+ (id)soundWithName:(id)arg1 path:(id)arg2 andGroup:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asset;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileShuffler;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)name;
- (id)nextFilePath;
- (id)path;
- (void)setAsset:(id)arg1;
- (void)setFileShuffler:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSoundGroup:(unsigned long long)arg1;
- (unsigned long long)soundGroup;

@end
