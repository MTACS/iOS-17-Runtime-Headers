
@interface OADImageRecolorInfo : NSObject {
    NSDictionary * mColors;
    NSDictionary * mFills;
}

- (void).cxx_destruct;
- (id)colors;
- (id)description;
- (id)fills;
- (unsigned long long)hash;
- (id)initWithColors:(id)arg1 fills:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
