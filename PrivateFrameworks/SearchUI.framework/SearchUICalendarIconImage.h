
@interface SearchUICalendarIconImage : SearchUIAppIconImage {
    NSDate * _date;
    bool  _isCurrentDate;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool isCurrentDate;

- (void).cxx_destruct;
- (id)date;
- (unsigned long long)hash;
- (id)initWithCurrentDateAndVariant:(unsigned long long)arg1;
- (id)initWithDate:(id)arg1 variant:(unsigned long long)arg2;
- (void)invalidateAppIcon;
- (bool)isCurrentDate;
- (bool)isEqual:(id)arg1;
- (id)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2;
- (void)setDate:(id)arg1;
- (void)setIsCurrentDate:(bool)arg1;
- (bool)shouldInvalidateAppIconForChangedBundleIdentifier:(id)arg1;

@end
