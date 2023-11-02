
@interface ODITitlePoint : ODIHorizonalList3 {
    NSString * mTitlePointPresentationName;
}

- (void).cxx_destruct;
- (id)initWithTitlePointPresentationName:(id)arg1 state:(id)arg2;
- (void)mapBaseStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapOnePillarStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapRoofStyleFromPoint:(id)arg1 shape:(id)arg2;

@end
