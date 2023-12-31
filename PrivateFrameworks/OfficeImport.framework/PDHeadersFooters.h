
@interface PDHeadersFooters : NSObject {
    int  mDateTimeFormat;
    NSString * mFooter;
    bool  mHasDateTime;
    bool  mHasFooter;
    bool  mHasHeader;
    bool  mHasNowDateTime;
    bool  mHasSlideNumber;
    bool  mHasUserDateTime;
    NSString * mHeader;
    NSString * mUserDateTime;
}

- (void).cxx_destruct;
- (id)footer;
- (bool)hasDateTime;
- (bool)hasFooter;
- (bool)hasHeader;
- (bool)hasNowDateTime;
- (bool)hasSlideNumber;
- (bool)hasUserDateTime;
- (id)header;
- (void)setFooter:(id)arg1;
- (void)setHasDateTime:(bool)arg1;
- (void)setHasFooter:(bool)arg1;
- (void)setHasHeader:(bool)arg1;
- (void)setHasNowDateTime:(bool)arg1;
- (void)setHasSlideNumber:(bool)arg1;
- (void)setHasUserDateTime:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setUserDateTime:(id)arg1;
- (id)userDateTime;

@end
