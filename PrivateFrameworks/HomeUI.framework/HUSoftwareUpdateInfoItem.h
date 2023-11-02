
@interface HUSoftwareUpdateInfoItem : HFItem {
    NSSet * _accessories;
    NSAttributedString * _releaseNotesAttributedString;
    NSString * _releaseNotesHTMLString;
}

@property (nonatomic, readonly) NSSet *accessories;
@property (nonatomic, retain) NSAttributedString *releaseNotesAttributedString;
@property (nonatomic, retain) NSString *releaseNotesHTMLString;

+ (id)_dateFormatter;
+ (id)_iconDescriptorForAccessories:(id)arg1;

- (void).cxx_destruct;
- (id)_releaseNotesResultsFuture;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)description;
- (id)init;
- (id)initWithAccessories:(id)arg1;
- (id)releaseNotesAttributedString;
- (id)releaseNotesHTMLString;
- (void)setReleaseNotesAttributedString:(id)arg1;
- (void)setReleaseNotesHTMLString:(id)arg1;

@end
