
@interface APOdmlAppVector : APOdmlVector {
    unsigned long long  _adamID;
}

@property (nonatomic, readonly) unsigned long long adamID;

- (unsigned long long)adamID;
- (id)data;
- (id)description;
- (id)initWithString:(id)arg1 version:(id)arg2;
- (id)initWithVersion:(id)arg1 header:(struct APOdmlAppVectorHeader { unsigned long long x1; unsigned int x2; unsigned int x3; }*)arg2 floats:(float*)arg3;

@end
