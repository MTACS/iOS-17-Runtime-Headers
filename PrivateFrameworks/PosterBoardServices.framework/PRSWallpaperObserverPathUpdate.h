
@interface PRSWallpaperObserverPathUpdate : NSObject <BSXPCSecureCoding> {
    unsigned long long  _changed;
    PRSServerPosterIdentity * _identity;
    unsigned long long  _locations;
    PRSServerPosterPath * _path;
}

@property (nonatomic) unsigned long long changed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PRSServerPosterIdentity *identity;
@property (nonatomic) unsigned long long locations;
@property (nonatomic, retain) PRSServerPosterPath *path;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)changed;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)identity;
- (id)initWithBSXPCCoder:(id)arg1;
- (unsigned long long)locations;
- (id)path;
- (void)setChanged:(unsigned long long)arg1;
- (void)setIdentity:(id)arg1;
- (void)setLocations:(unsigned long long)arg1;
- (void)setPath:(id)arg1;

@end
