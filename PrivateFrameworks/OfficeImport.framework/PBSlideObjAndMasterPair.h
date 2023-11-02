
@interface PBSlideObjAndMasterPair : NSObject {
    int  mMasterId;
    PDSlide * mSlide;
}

+ (id)createPair:(id)arg1 masterId:(int)arg2;

- (void).cxx_destruct;
- (int)masterId;
- (void)setSlide:(id)arg1 masterId:(int)arg2;
- (id)slide;

@end
