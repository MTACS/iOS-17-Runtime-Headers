
@interface GQHSectionStyleRun : NSObject {
    struct { 
        long long location; 
        long long length; 
    }  mPageRange;
    GQDSStyle * mStyle;
}

- (void)dealloc;

@end
