
@interface OADGraphic : OADDrawable {
    OADGraphic * mMasterGraphic;
}

- (void).cxx_destruct;
- (id)description;
- (id)geometry;
- (id)graphicProperties;
- (id)masterGraphic;
- (void)setMasterGraphic:(id)arg1;

@end
