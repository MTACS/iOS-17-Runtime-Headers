
@interface ODDPoint : NSObject {
    ODDPointPropertySet * mPropertySet;
    OADShapeProperties * mShapeProperties;
    OADTextBody * mText;
    int  mType;
}

+ (void)addConnectionToPoint:(id)arg1 order:(unsigned long long)arg2 array:(id*)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)propertySet;
- (void)setText:(id)arg1;
- (void)setType:(int)arg1;
- (id)shapeProperties;
- (id)text;
- (int)type;

@end
