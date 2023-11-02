
@interface WMPictureMapper : CMDrawableMapper {
    WDPicture * wdPicture;
}

- (void).cxx_destruct;
- (id)initWithWDPicture:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBounds;
- (void)setBoundingBox;

@end
