
@interface MTUISelectionViewData : NSObject {
    bool  _isSelected;
    NSString * _title;
}

@property (nonatomic) bool isSelected;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (bool)isSelected;
- (void)setIsSelected:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
