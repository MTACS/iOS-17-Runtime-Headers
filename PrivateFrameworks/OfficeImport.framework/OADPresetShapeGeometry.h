
@interface OADPresetShapeGeometry : OADShapeGeometry {
    int  mType;
}

- (id)description;
- (id)equivalentCustomGeometry;
- (id)escherEquivalentCustomGeometry;
- (id)oa12EquivalentCustomGeometry;
- (void)setType:(int)arg1;
- (int)type;

@end
