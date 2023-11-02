
@interface MKTransitDepartureContainerHeaderViewModel : NSObject {
    NSArray * _labelItems;
    bool  _showIncidentsIcon;
    NSString * _titleText;
}

@property (nonatomic, copy) NSArray *labelItems;
@property (nonatomic) bool showIncidentsIcon;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (id)labelItems;
- (void)setLabelItems:(id)arg1;
- (void)setShowIncidentsIcon:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (bool)showIncidentsIcon;
- (id)titleText;

@end
