
@interface CSSceneClassification : CSExternalAnalysisTag <CSCoderEncoder> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    long long  _mediaType;
    unsigned int  _sceneIdentifier;
    long long  _sceneType;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property long long mediaType;
@property unsigned int sceneIdentifier;
@property long long sceneType;

+ (bool)supportsSecureCoding;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCSCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 synonyms:(id)arg2 confidence:(double)arg3 sceneIdentifier:(unsigned int)arg4;
- (bool)isEqual:(id)arg1;
- (long long)mediaType;
- (unsigned int)sceneIdentifier;
- (long long)sceneType;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMediaType:(long long)arg1;
- (void)setSceneIdentifier:(unsigned int)arg1;
- (void)setSceneType:(long long)arg1;

@end
