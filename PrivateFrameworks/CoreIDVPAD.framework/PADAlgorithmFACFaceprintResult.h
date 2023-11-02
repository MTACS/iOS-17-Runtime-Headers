
@interface PADAlgorithmFACFaceprintResult : NSObject {
    NSArray * _faceprint;
    unsigned long long  _index;
}

@property (nonatomic, retain) NSArray *faceprint;
@property (nonatomic) unsigned long long index;

- (void).cxx_destruct;
- (id)faceprint;
- (unsigned long long)index;
- (void)setFaceprint:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end
