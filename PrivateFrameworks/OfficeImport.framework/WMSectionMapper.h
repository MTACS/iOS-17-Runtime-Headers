
@interface WMSectionMapper : CMMapper {
    bool  mBreakAtEnd;
    bool  mBreakAtStart;
    bool  mIsTitlePage;
    float  mLeftMargin;
    float  mTopMargin;
    WDSection * wdSection;
}

+ (bool)isContentEmpty:(id)arg1;

- (void).cxx_destruct;
- (void)MapSectionStyleAt:(id)arg1;
- (id)initWithWDSection:(id)arg1 breakAtStart:(bool)arg2 breakAtEnd:(bool)arg3 parent:(id)arg4;
- (float)leftMargin;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapFooterAt:(id)arg1 withState:(id)arg2;
- (void)mapHeaderAt:(id)arg1 withState:(id)arg2;
- (void)setLeftMargin:(float)arg1;
- (void)setTopMargin:(float)arg1;
- (float)topMargin;

@end
