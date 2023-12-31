
@interface GQDBGAbstractSlide : NSObject {
    GQDBGBodyPlaceholder * mBodyPlaceholder;
    bool  mCallGenerator;
    bool  mHidden;
    char * mID;
    GQDBGObjectPlaceholder * mObjectPlaceholder;
    GQDBGSlideNumberPlaceholder * mSlideNumberPlaceholder;
    GQDSStyle * mSlideStyle;
    GQDSStylesheet * mStylesheet;
    GQDBGTitlePlaceholder * mTitlePlaceholder;
}

- (char *)ID;
- (void)dealloc;
- (bool)isHidden;
- (int)readAttributesForSlide:(struct _xmlTextReader { }*)arg1;
- (id)slideStyle;
- (id)stylesheet;

@end
