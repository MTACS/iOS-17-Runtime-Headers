
@interface SKMountParams : NSObject <NSCopying> {
    NSSet * _allParams;
    bool  _force;
    NSURL * _mountPoint;
    bool  _noBrowse;
    bool  _raidTraverse;
    bool  _readOnly;
    bool  _recursive;
}

@property (nonatomic, retain) NSSet *allParams;
@property (nonatomic) bool force;
@property (nonatomic, copy) NSURL *mountPoint;
@property (nonatomic) bool noBrowse;
@property (nonatomic) bool raidTraverse;
@property (nonatomic) bool readOnly;
@property (nonatomic) bool recursive;

- (void).cxx_destruct;
- (id)allParams;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)force;
- (id)init;
- (id)initWithParams:(id)arg1;
- (id)mountPoint;
- (bool)noBrowse;
- (bool)raidTraverse;
- (bool)readOnly;
- (bool)recursive;
- (id)redactedDescription;
- (void)setAllParams:(id)arg1;
- (void)setForce:(bool)arg1;
- (void)setMountPoint:(id)arg1;
- (void)setNoBrowse:(bool)arg1;
- (void)setRaidTraverse:(bool)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setRecursive:(bool)arg1;

@end
