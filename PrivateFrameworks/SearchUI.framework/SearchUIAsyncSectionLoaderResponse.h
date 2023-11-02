
@interface SearchUIAsyncSectionLoaderResponse : NSObject {
    bool  _animated;
    NSArray * _cardSection;
    bool  _reconfigureExisting;
}

@property bool animated;
@property (nonatomic, retain) NSArray *cardSection;
@property bool reconfigureExisting;

- (void).cxx_destruct;
- (bool)animated;
- (id)cardSection;
- (bool)reconfigureExisting;
- (void)setAnimated:(bool)arg1;
- (void)setCardSection:(id)arg1;
- (void)setReconfigureExisting:(bool)arg1;

@end
