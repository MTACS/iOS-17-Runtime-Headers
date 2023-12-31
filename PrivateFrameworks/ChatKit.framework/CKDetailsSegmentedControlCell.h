
@interface CKDetailsSegmentedControlCell : CKDetailsCell <CKDetailsCell> {
    UISegmentedControl * _segmentedControl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)segmentedControl;
- (void)setSegmentedControl:(id)arg1;

@end
