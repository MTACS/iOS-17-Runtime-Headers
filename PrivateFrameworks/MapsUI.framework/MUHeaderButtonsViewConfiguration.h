
@interface MUHeaderButtonsViewConfiguration : NSObject {
    double  _detourTime;
    <MUHeaderButtonMenuActionProvider> * _menuProvider;
    NSArray * _possibleAnalyticActions;
    bool  _showMoreButton;
}

@property (nonatomic) double detourTime;
@property (nonatomic) <MUHeaderButtonMenuActionProvider> *menuProvider;
@property (nonatomic, copy) NSArray *possibleAnalyticActions;
@property (nonatomic) bool showMoreButton;

- (void).cxx_destruct;
- (double)detourTime;
- (id)menuProvider;
- (id)possibleAnalyticActions;
- (void)setDetourTime:(double)arg1;
- (void)setMenuProvider:(id)arg1;
- (void)setPossibleAnalyticActions:(id)arg1;
- (void)setShowMoreButton:(bool)arg1;
- (bool)showMoreButton;

@end
