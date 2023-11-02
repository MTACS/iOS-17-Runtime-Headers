
@interface _GEOTransitSystem : NSObject <GEOTransitSystem, NSSecureCoding> {
    GEOPBTransitSystem * _system;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artwork;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystem:(id)arg1;
- (unsigned long long)muid;
- (id)name;
- (id)styleAttributes;

@end
