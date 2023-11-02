
@interface HKInfographicContentItem : NSObject <HKInfographicItem> {
    NSAttributedString * _descriptionString;
    NSAttributedString * _titleString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSAttributedString *descriptionString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSAttributedString *titleString;

- (void).cxx_destruct;
- (id)descriptionString;
- (id)initWithTitle:(id)arg1 description:(id)arg2;
- (void)setDescriptionString:(id)arg1;
- (void)setTitleString:(id)arg1;
- (id)titleString;

@end
