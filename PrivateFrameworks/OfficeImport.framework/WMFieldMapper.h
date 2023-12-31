
@interface WMFieldMapper : WMParagraphMapper {
    NSString * mLink;
    NSMutableString * mMarkerText;
    int  mMode;
    unsigned int  mType;
}

- (void).cxx_destruct;
- (id)initWithWDFieldMarker:(id)arg1 parent:(id)arg2;
- (void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3;
- (void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3;

@end
