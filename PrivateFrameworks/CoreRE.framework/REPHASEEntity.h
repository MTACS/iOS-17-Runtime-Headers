
@interface REPHASEEntity : NSObject {
    PHASEOccluder * _occluder;
    PHASESource * _source;
}

@property (nonatomic, retain) PHASEOccluder *occluder;
@property (nonatomic, retain) PHASESource *source;

- (void).cxx_destruct;
- (id)occluder;
- (void)setOccluder:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
