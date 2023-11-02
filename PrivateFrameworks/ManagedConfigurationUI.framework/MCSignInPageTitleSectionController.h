
@interface MCSignInPageTitleSectionController : MCProfileTitlePageMetaDataSectionController {
    NSString * _orgName;
}

@property (nonatomic, copy) NSString *orgName;

- (void).cxx_destruct;
- (id)cellForRowAtIndex:(unsigned long long)arg1;
- (double)heightForHeader;
- (unsigned long long)numberOfRows;
- (id)orgName;
- (void)setOrgName:(id)arg1;

@end
