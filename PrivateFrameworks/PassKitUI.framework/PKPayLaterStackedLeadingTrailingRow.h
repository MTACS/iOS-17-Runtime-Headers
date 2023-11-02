
@interface PKPayLaterStackedLeadingTrailingRow : NSObject <PKPayLaterCollectionViewRow> {
    NSString * _detailText;
    NSString * _leadingPrimaryText;
    NSString * _leadingSecondaryText;
    double  _progress;
    UIColor * _progressBarEndColor;
    UIColor * _progressBarStartColor;
    bool  _showProgressBar;
    NSString * _trailingPrimaryText;
    NSString * _trailingSecondaryText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, copy) NSString *leadingPrimaryText;
@property (nonatomic, copy) NSString *leadingSecondaryText;
@property (nonatomic) double progress;
@property (nonatomic, retain) UIColor *progressBarEndColor;
@property (nonatomic, retain) UIColor *progressBarStartColor;
@property (nonatomic) bool showProgressBar;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *trailingPrimaryText;
@property (nonatomic, copy) NSString *trailingSecondaryText;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (id)detailText;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithLeadingPrimaryText:(id)arg1 leadingSecondaryText:(id)arg2 trailingPrimaryText:(id)arg3 trailingSecondaryText:(id)arg4 detailText:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)leadingPrimaryText;
- (id)leadingSecondaryText;
- (double)progress;
- (id)progressBarEndColor;
- (id)progressBarStartColor;
- (void)setDetailText:(id)arg1;
- (void)setLeadingPrimaryText:(id)arg1;
- (void)setLeadingSecondaryText:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressBarEndColor:(id)arg1;
- (void)setProgressBarStartColor:(id)arg1;
- (void)setShowProgressBar:(bool)arg1;
- (void)setTrailingPrimaryText:(id)arg1;
- (void)setTrailingSecondaryText:(id)arg1;
- (bool)showProgressBar;
- (id)trailingPrimaryText;
- (id)trailingSecondaryText;

@end
