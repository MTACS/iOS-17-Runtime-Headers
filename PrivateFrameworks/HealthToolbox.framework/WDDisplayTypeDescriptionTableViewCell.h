
@interface WDDisplayTypeDescriptionTableViewCell : UITableViewCell {
    WDDisplayTypeDescriptionView * _descriptionView;
    HKDisplayType * _displayType;
    bool  _showAttributionText;
}

@property (nonatomic, retain) HKDisplayType *displayType;
@property (nonatomic) bool showAttributionText;

+ (id)defaultReuseIdentifier;
+ (double)minimumHeight;

- (void).cxx_destruct;
- (id)displayType;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayType:(id)arg1 showAttributionText:(bool)arg2 reuseIdentifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDisplayType:(id)arg1;
- (void)setShowAttributionText:(bool)arg1;
- (void)setupSubviews;
- (bool)showAttributionText;

@end
